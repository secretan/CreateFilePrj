#ifndef READINI_H
#define READINI_H

#include <cstdio>
#include <cstdlib>

class ReadIni
{
public:
    ReadIni();
    ~ReadIni();
    bool ReadCHead();
    bool ReadCPPHead();
    bool ReadHHead();

private:
    FILE *fp;
};

#endif // READINI_H
