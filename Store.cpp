#include <iostream>
#include <string>
#include "Store.h"

Store::Store(){
    size = 0;
}
// constructor for a store that can have up to capacity number of items
Store::Store(int capacity){
    size = capacity;
    stock = new *StockItem[capacity];
}

// returns the number items currently stocked
// note that if more than one of the same item is in stock they are *all* counted
// i.e. if 3 widgets and 2 hammers are in stock then it will return 5.
int Store::get_Total_Stock_Count(){return curr_size;}

// returns the total count of items in stock with the given item code
// i.e. if there are 3 widgets (with the given item_code in stock then it will return 3.
int Store::get_Stock_Count(int item_code){
    int count = 0;
    for (int i = 0; i < curr_size; i++){
        if (item_code = stock[i].get_item_code()){
            count++;
        }
    }
    return count;
}

// returns the array of all items in stock. 
// i.e. if there are 3 widgets and 2 hammers then the returned array will have 5 items.
StockItem *Store::get_Stock_List() {return stock;};

// returns true and adds new_stock to the store if the store has enough capacity
// otherwise returns false
bool Store::add_Stock(StockItem new_stock){
    if (curr_size < size){
        stock[curr_size] = new_stock;
        return true;
    }
    return false;
}

Store::~Store() {delete[] stock;};