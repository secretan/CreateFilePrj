#include "readini.h"

ReadIni::ReadIni()
{
    fp = fopen("./CreateFile.ini","r");

    if (fp==NULL)
    {
        perror("fopen error\n");
    }
}

ReadIni::~ReadIni()
{

}
