#indefine __DATA__
#define __DATA__

class Data
{
	private:
		char name[20];
		char address[30];
		char city[15];
		long zip;
	public:
		friend istream& operator >>(/*complete arguments */);
		friend istream& operator <<(/*complete arguments */);
};

#endif /*  __DATA__ */