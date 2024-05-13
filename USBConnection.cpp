#include <iostream>
#include <stack>
#include "USBConnection.h"

std::stack<int> USBConnection::ids({3,2,1});

USBConnection* USBConnection::CreateUsbConnection() {
    if (ids.empty()){
        return nullptr;
    }
    int index = ids.top();
    ids.pop();
    return new USBConnection(index);
};

int USBConnection::get_id() {return id;};

USBConnection::~USBConnection() {ids.push(id);};

