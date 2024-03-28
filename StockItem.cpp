#include <iostream>
#include <string>
#include "StockItem.h"

StockItem::StockItem(){
    description = "";
    code_num = 0;
}

StockItem::StockItem(int code_num, std::string description){
    this->code_num = code_num;
    this->description = description;
}

std::string StockItem::get_description() {return description;};

int StockItem::get_item_code() {return code_num;};

StockItem::~StockItem() {
    description = "";
    code_num = 0;
}