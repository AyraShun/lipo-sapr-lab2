#ifndef CUMACROSTEST_H
#define	CUMACROSTEST_H
#include "Macros.h"
#include <string>
#include <iostream>
#include <fstream>

class CUMacrosTest {
public:
    CUMacrosTest();
    CUMacrosTest(const CUMacrosTest& orig);
    virtual ~CUMacrosTest();
    bool startTest(ifstream& aInStream, CUMacros& macrosFinder, const char* cFilename);
};

#endif	