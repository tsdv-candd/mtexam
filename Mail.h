#indefine __MAIL__
#define __MAIL__

class Mail 
{
	protected:
		Data sender;
		Data addressee;
		static double postage;
	public:
		friend istream& operator>>(/*poner argumentos*/);
		virtual double calculatePostage();
		void seePostage();
};

#endif /*  __MAIL__ */