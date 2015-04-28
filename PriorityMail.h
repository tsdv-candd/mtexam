#indefine __PRIORITY_MAIL__
#define __PRIORITY_MAIL__
enum Zone {national, international};

class PriorityMail : public Mail
{
	protected:
		bool urgent;
		Zone area;
		double weight, price;
	public:
		PriorityMail(Zone z, double w, bool urg);
		friend istream& operator>>(/* completed arguments */);
		double calculatePostage();
};

#endif /*  __PRIORITY_MAIL__ */