#include "Invoice.h"
#include <iostream>
#include <string>

Invoice::Invoice() {invoiceId = "", dollarsOwed = 0;};
Invoice::Invoice(std::string invoiceId) {this->invoiceId = invoiceId, dollarsOwed = 0;};

void Invoice::addServiceCost(int CostDollars) {dollarsOwed += CostDollars;};
int Invoice::getDollarsOwed() {return dollarsOwed;};
std::string Invoice::getInvoiceId() {return invoiceId;};