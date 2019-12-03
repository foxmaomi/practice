#define _CRT_SECURE_NO_WARNINGS

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1);
	Date(const Date& d);//¿½±´¹¹Ôì
	Date& operator=(const Date& d);
	Date operator+(int days);
	Date operator-(int days);
	int operator-(const Date& d);
	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);
	bool operator>(const Date& d)const;
	bool operator>=(const Date& d)const;
	bool operator<(const Date& d)const;
	bool operator<=(const Date& d)const;
	bool operator==(const Date& d)const;
	bool operator!=(const Date& d)const;
private:
	int _year;
	int _month;
	int _day;
};
Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}
Date::Date(const Date& d)
{
	
}
Date Date::operator+(int days)
{
	return Date(_day + days);
}
void main()
{
	Date date;
}