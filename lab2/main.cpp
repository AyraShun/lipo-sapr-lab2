#include <cstdlib>
#include "Macros.h"
#include <set>
#include <iostream>
#include <string>


using namespace std;

int main(int argc, char** argv) {

    CUMacros macrosFinder;
    set<string> setOfMacros = macrosFinder.CountMacrosWithStrFromLog();
    cout << setOfMacros.size() << endl;
    return 0;
}