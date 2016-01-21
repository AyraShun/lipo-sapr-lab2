#include "MacrosTest.h"
#include "Macros.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

CUMacrosTest::CUMacrosTest() {
}

CUMacrosTest::CUMacrosTest(const CUMacrosTest& orig) {
}

CUMacrosTest::~CUMacrosTest() {
}

bool CUMacrosTest::startTest(ifstream& aInStream, CUMacros& macrosFinder, const char* cFilename)
{
	aInStream.open(cFilename);
	cin.rdbuf(aInStream.rdbuf());
        set<string> testMacros = macrosFinder.CountMacrosWithStrFromLog();
	aInStream.close();
	int exceptedMacrosNumber=7;
        if (testMacros.size() == exceptedMacrosNumber) {
            return true;
        }
        else {
            return false;
        }
}