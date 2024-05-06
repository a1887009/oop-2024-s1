#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include <string>

class Invoice{
private:
    std::string invoiceId;
    int dollarsOwed;

public:
    Invoice();
    Invoice(std::string invoiceId);

    void addServiceCost(int CostDollars);
    int getDollarsOwed();
    std::string getInvoiceId();


};

#endif // INVOICE_H