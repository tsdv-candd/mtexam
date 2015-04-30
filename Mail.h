#ifndef __MAIL__
#define __MAIL__

#include "Data.h"

class Mail
{
protected:
    Data sender;
    Data addressee;
    static double postage;
public:
    friend istream& operator>>(istream &s, Mail &mail);
    virtual double calculatePostage() = 0;
    void seePostage();
};

#endif /*  __MAIL__ */