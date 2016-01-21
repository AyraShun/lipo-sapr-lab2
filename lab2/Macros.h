#include <string>
#include <set>

using namespace std;

#ifndef CUMACROS_H
#define	CUMACROS_H

class CUMacros {
public:
    CUMacros();
    CUMacros(const CUMacros& orig);
    virtual ~CUMacros();
    set<string> CountMacrosWithStrFromLog();
private:
    bool FindStringFromMacros(string currentString);
};

#endif	/* CUMACROS_H */