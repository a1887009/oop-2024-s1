#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <iostream>
#include <stack>

class USBConnection{
private:
    int id;
    static std::stack<int> ids;
    USBConnection(int id) {this->id = id;};

public:

    static USBConnection* CreateUsbConnection();
    int get_id();
    ~USBConnection();


};


#endif // USBCONNECTION_H