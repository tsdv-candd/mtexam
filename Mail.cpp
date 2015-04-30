#include <iostream>
#include <string>
#include <sstream>
#include "Mail.h"

using namespace std;

//Overloading the input stream operator
istream& operator >>(istream &s, Mail &mail) {
    s >> mail.sender;
    s >> mail.addressee;
    s >> mail.postage;
    return s;
}
