#include <iostream>
#include <string>
#include "Store.h"
#include "StockItem.h"

using namespace std;

int main(){

    Store store = Store(3);

    StockItem item1 = StockItem(1, "widget");
    if (store.add_Stock(item1)){
        cout << "Item 1 was added." << endl;
    }else {cout << "Item 1 failed to add" << endl;}

    StockItem item2 = StockItem(2, "mouse");
    if (store.add_Stock(item2)){
        cout << "Item 2 was added." << endl;
    }else {cout << "Item 2 failed to add" << endl;}

    StockItem item3 = StockItem(3, "milk");
    if (store.add_Stock(item3)){
        cout << "Item 3 was added." << endl;
    }else {cout << "Item 3 failed to add" << endl;}

    cout << "Total stock count: " << store.get_Total_Stock_Count() << endl;

    StockItem item4 = StockItem(1, "widget");
    if (store.add_Stock(item4)){
        cout << "Item 4 was added." << endl;
    }else {cout << "Item 4 failed to add" << endl;}

    cout << "Total widget count: " << store.get_Stock_Count(1) << endl;


}
