#ifndef EQUIVALENCETESTS_H
#define EQUIVALENCETESTS_H

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testMixedIntegers();
        testZeroIntegers();
        testBigPositiveIntegers();
        testBigNegativeIntegers();

        // Add other tests here
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void testMixedIntegers() {
        Addition addition;
        if (addition.add(-5, 3) != -2) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testZeroIntegers() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

    void testBigPositiveIntegers() {
        Addition addition;
        if (addition.add(100000000, 200000000) != 300000000) {
            std::cout << "Test 5 failed!" << std::endl;
        }
    }

    void testBigNegativeIntegers() {
        Addition addition;
        if (addition.add(-100000000, -200000000) != -300000000) {
            std::cout << "Test 6 failed!" << std::endl;
        }
    }

    // Add other test functions here
};

#endif // EQUIVALENCETESTS_H