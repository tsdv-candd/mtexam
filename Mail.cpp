#include <iostream>
#include <string>
#include <sstream>
#include "Mail.h"

using namespace std;

double Mail::postage = 0.48;

//Overloading the input stream operator
istream& operator >>(istream &s, Mail &mail) {
    cout << "Address:" << endl;
    s >> mail.addressee;
    cout << "Sender:" << endl;
    s >> mail.sender;
    return s;
}

void Mail::seePostage()
{
    cout << "Sender: " << endl << sender;
    cout << "Addressee: " << endl << addressee;
    cout << "Postage: $" <<  postage << endl << endl;
}