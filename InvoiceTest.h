#ifndef INVOICETEST_H
#define INVOICETEST_H

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        testCheckInitialised();
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }


        // Add more test cases here
    }

    void testCheckInitialised() {
        {
            Invoice invoice("ABCD");
            if (invoice.getInvoiceId() != "ABCD"){
                std::cout << "Test 3 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("test");
            if (invoice.getInvoiceId() != "test"){
                std::cout << "Test 4 failed!" << std::endl;
            }
        }
    }

    // Add other test functions here
};


#endif // INVOICETEST_H