/// @author �������� �.�.
/// ���������� ������� ������

#include <string>
#include <stdexcept>
#include <iostream>
#include "Date.h"
using namespace std;
int Date::mm[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };


/// ����
Date::Date() {
	day = 0; month = 0; year = 0;
}
Date::Date(int d, int m, int y) {
	set_year(y);
	set_month(m);
	set_day(d);
};

/// ������� ������� � ��� 
int Date::convert_date() {
	int days = 0;


	for (int i = 0; i < month; i++)
	{
		days += mm[i];
	}
	days += day + year * 365;
	return days;
}



/// ������������� ��� � ���� 
void Date::set_date_in_day(int dd) {
	int y = dd / 365;
	set_year(y);
	int x = dd % 365;
	int mon = 0;
	for (int i = 0; i < 12; i++)
	{
		if (x < mm[i])
		{
			set_month(mon);
			set_day(x);
			break;
		}
		x -= mm[i];
		mon++;

	}
}

/// ������ ����
void Date::set_date(int d, int m, int y) {
	set_day(d);
	set_month(m);
	set_year(y);

}



/// ������ ���� 
void Date::set_day(int d) {
	if ((d < 0) || (d > 31)) throw std::invalid_argument("invalid parameter: day");
	day = d;
}

/// ������ �����
void Date::set_month(int m) {

	if ((m < 0) || (m > 11)) throw std::invalid_argument("invalid parameter: month");

	if ((day <= 0) || (day <= mm[m]))// throw std::invalid_argument("invalid parametr: no days in the month ");
	{
		month = m;
	}
	else {
		month = m + 1;
		day = day - mm[m];
	}
}

/// ������ ��� 
void Date::set_year(int y) {
	if (y < 0) throw std::invalid_argument("invalid parameter: year");
	year = y;
}

///�������� ���
int Date::get_day() const { return day; }

///�������� ������
int Date::get_month() const { return month; }

///�������� ����
int Date::get_year() const { return year; }

/// �������� ���
void Date::add_day(int d) {
	if (d < 0) throw std::invalid_argument("Invalid parameter: seconds");
	int d1 = this->convert_date();
	d1 = d1 + d;

	this->set_date_in_day(d1);
}

/// ������� ����
void Date::sub_day(int d) {
	if (d < 0) throw std::invalid_argument("Invalid parameter: seconds");
	int d1 = this->convert_date();
	d1 = d1 - d;

	this->set_date_in_day(d1);
}

/// �������� �����
void Date::add_month(int m) {
	if (m < 0) throw std::invalid_argument("invalid parameter: month");

	if (m + month >= 12) {
		year += +m / 12;
		set_date(day, month + m - 12, year + 1);

	}
	else
		set_date(day, month + m, year);
}

/// ������ �����
void Date::sub_month(int m) {
	if (m < 0) throw std::invalid_argument("invalid parameter: month");

	if (month - m <= 0) {
		year -= m / 12;
		set_date(day, month - m + 12, year - 1);

	}
	else
		set_date(day, month - m, year);
}

/// �������� ���
void Date::add_year(int y) {
	if (y < 0) throw std::invalid_argument("invalid parameter: month");
	set_date(day, month, year + y);
}

/// ������ ���
void Date::sub_year(int y) {
	if (y < 0) throw std::invalid_argument("invalid parameter: month");
	if (year - y < 0) throw std::invalid_argument("invalid parameter: year < 0");
	set_date(day, month, year - y);
}

/// ������� ���� � ����������� ������� 
std::string Date::show_data() {
	return std::to_string(day) + " days  " + std::to_string(month) + " month  " + std::to_string(year) + " year  ";// +std::to_string(convert_date()) + " all day";
}





