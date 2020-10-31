#include<iostream>

struct Date
{
	int year, month, day;
	
	void set_day(int&a, int& b, int& c);
	void show_day() const;
};
void Date::set_day(int&a, int& b, int& c)   //结构体成员函数的定义，同类的定义方式相似
{
	year = a;
	month = b;
	day = c;
}
void Date::show_day() const
{
	std::cout << year << "." << month << "." << day << "\n";
}
int main()
{
	int a = 2020;
	int b = 10;
	int c = 31;
	Date date;
	date.set_day(a, b, c);
	date.show_day();
	return 0;
}
