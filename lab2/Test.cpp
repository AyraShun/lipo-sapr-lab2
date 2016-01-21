#include "Macros.h"
#include "MacrosTest.h"
#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char** argv) {

    CUMacros macrosFinder;
    CUMacrosTest tester;
    ifstream inStream;
    
    bool test = tester.startTest(inStream, macrosFinder, "test.log");
    
    if (test) {
        cout << "Success" << endl;
    }
    else {
        cout << "Error" << endl;
    }    
    return 0;
}