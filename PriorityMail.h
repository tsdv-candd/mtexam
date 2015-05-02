#ifndef __PRIORITY_MAIL__
#define __PRIORITY_MAIL__

#include "Mail.h"

enum Zone {national = 0, international};

class PriorityMail : public Mail
{
protected:
    bool urgent;
    Zone area;
    double weight, price;
public:
    PriorityMail(Zone z, double w, bool urg);
    friend istream& operator>>(istream &s, PriorityMail &pMail);
    double calculatePostage();
};

#endif /*  __PRIORITY_MAIL__ */