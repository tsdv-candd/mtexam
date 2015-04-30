#include "Data.h"
#include "Mail.h"
#include "PriorityMail.h"

int Menu();

int main()
{
    Mail *list[15]; //array of Mail pointer of the class
    int opc,num=0;
    while(1) {
        opc=Menu();
        if(opc ==1) {
            //declare a Mail and add to list
        } else if(opc ==2) {
            //declare a Priority Mail and add to the class
        } else if(opc ==3) {
            //print all data in a list
        } else if(opc ==4) {
            //free memory and exit
        }
    }
}

int Menu () {
    int tmpOpt = 0;
    cout << "Enter an option:" << endl;
    cout << "\t(1) Introduce First mail" << endl;
    cout << "\t(2) Introduce Priority mail" << endl;
    cout << "\t(3) Print all mail information" << endl;
    cout << "\t(4) Exit" << endl;
    cin >> tmpOpt;
    if( tmpOpt != 1
            && tmpOpt != 2
            && tmpOpt != 3
            && tmpOpt != 4) {
        cout << "Invalid option" << endl;
        return 0;
    }
    return tmpOpt;
}
