CC=g++
CFLAGS=-Wall -g
#LDFLAGS=-lcunit

all: mail

clean:
	rm -f *.o logserver logclient test_driver

mail: Data.o Mail.o PriorityMail.o main_usps.o 
	$(CC) $(CFLAGS) Data.o Mail.o PriorityMail.o main_usps.o 
Data.o: Data.cpp Mail.h

Mail.o: Mail.cpp Mail.h

PriorityMail.o: PriorityMail.cpp PriorityMail.h