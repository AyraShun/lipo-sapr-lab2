#include "Macros.h"
#include <iostream>
#include <string>
#include <set>
#include <pcrecpp.h>

using namespace std;
using namespace pcrecpp;

CUMacros::CUMacros() {
}

CUMacros::CUMacros(const CUMacros& orig) {
}

set<string> CUMacros::CountMacrosWithStrFromLog() 
{
    RE re(".*#define.*");
    string currentString = "";
    int countMacros=0;
    
    set <string> setOfMacros;
            
    while( getline (cin,currentString) ) 
    {
        if(re.FullMatch(currentString)) 
        {
            currentString.erase(0,(currentString.find("#define"))+8); 
            if (FindStringFromMacros(currentString)) setOfMacros.insert(currentString);
        }
    }
    
    return setOfMacros;
}


bool CUMacros::FindStringFromMacros(string currentString) {
    if (currentString.find("\"")<currentString.length())
        return true;
    else
        return false;
}

CUMacros::~CUMacros() {
}