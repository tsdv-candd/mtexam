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
