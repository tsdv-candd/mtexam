#include <iostream>
#include <string>
#include <sstream>
#include "Mail.h"

using namespace std;

double Mail::postage = 0;

//Overloading the input stream operator
istream& operator >>(istream &s, Mail &mail) {
    s >> mail.sender;
    s >> mail.addressee;
    s >> mail.postage;
    return s;
}

void Mail::seePostage()
{
    cout << "Sender: " << sender << endl;
    cout << "Addressee: " << addressee << endl;
    std::cout << "Postage: " << postage << endl;
}

