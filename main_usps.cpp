#include <string.h>
#include "Data.h"
#include "Mail.h"
#include "PriorityMail.h"

int Menu();

int main()
{
    Mail *list[15]; //array of Mail pointer of the class
    memset(list, 0, sizeof(list));
    int opc, num=0;
    while(1) {
        opc = Menu();
        if(opc ==1) {
            //declare a Mail and add to list
            Mail mail;
            cin >> mail;
            list[num++] = &mail;
            cout << "num=" << num << endl;
        } else if(opc ==2) {
            //declare a Priority Mail and add to the class
            PriorityMail pMail(national, 0, 0);
            cin >> pMail;
            pMail.calculatePostage();
            list[num++] = &pMail;
        } else if(opc ==3) {
            //print all data in a list
            for(num =0; num < 15; num++) {
                if(list[num]) {
                    cout << "Mail nr" << num << endl;
                    list[num]->seePostage();
                }
            }
        } else if(opc ==4) {
            //free memory and exit
            break;
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
