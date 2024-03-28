#include <iostream>
#include <string>
#include "StockItem.h"

using namespace std;

int main(){

    StockItem item = StockItem(5, "milk");
    cout << item.get_item_code() << endl;
    cout << item.get_description() << endl;
    item.~StockItem();
    cout << item.get_item_code() << endl;
    cout << item.get_description() << endl;
}