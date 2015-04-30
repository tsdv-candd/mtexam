#ifndef __DATA__
#define __DATA__

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Data
{
private:
    char name[20];
    char address[30];
    char city[15];
    long zip;
public:
    friend istream& operator >>(istream &s, Data &data);
    friend ostream& operator <<(ostream &s, Data &data);
};

#endif /*  __DATA__ */