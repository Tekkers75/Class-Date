//#include "pch.h"
#include "gtest/gtest.h"
#include "..//..//Class Date/Class Date/Date.h"

TEST(TestDate, TestGetDay) {
	Date s(5,7,7);
	EXPECT_EQ(s.get_day(), 5);
	EXPECT_EQ(s.get_month(), 7);
	EXPECT_EQ(s.get_year(), 7);
	//EXPECT_TRUE(true);
}

TEST(TestDate, TestAddDay) {
	Date s;
	s.set_day(4);
	s.add_day(5);
	EXPECT_EQ(s.get_day(), 9);
}

TEST(TestDate, TestAddMonth) {
	Date s;
	s.set_month(10);
	s.add_month(1);
	EXPECT_EQ(s.get_month(), 11);
}

TEST(TestDate, TestAddYear) {
	Date s;
	s.set_year(2);
	s.add_year(5);
	EXPECT_EQ(s.get_year(), 7);
}

TEST(TestDate, TestSubDay) {
	Date s;
	s.set_day(16);
	s.sub_day(5);
	EXPECT_EQ(s.get_day(), 11);
}

TEST(TestDate, TestSubMonth) {
	Date s;
	s.set_month(6);
	s.sub_month(5);
	EXPECT_EQ(s.get_month(), 1);
}

TEST(TestDate, TestSubYear) {
	Date s;
	s.set_year(12);
	s.sub_year(5);
	EXPECT_EQ(s.get_year(), 7);
}

TEST(TestDate, TestAddDateHARD) {
	Date s;
	s.set_date(10, 5, 12);
	s.add_day(6);
	s.add_month(4);
	s.add_year(5);
	EXPECT_EQ(s.show_data(), std::to_string(16) + " days  " + std::to_string(9) + " month  " + std::to_string(17) + " year  ");
}

TEST(TestDate, TestAddDateInDaysHARD) {
	Date s;
	s.set_date_in_day(15);
	s.add_day(6);
	s.add_month(1);
	s.add_year(1);
	EXPECT_EQ(s.convert_date(),417);
}

TEST(TestDate, TestSubDateHARD) {
	Date s;
	s.set_date(10, 5, 12);
	s.sub_day(6);
	s.sub_month(4);
	s.sub_year(5);
	EXPECT_EQ(s.show_data(), std::to_string(4) + " days  " + std::to_string(1) + " month  " + std::to_string(7) + " year  ");
}

TEST(TestDate, TestSubDateInDaysHARD) {
	Date s;
	s.set_date_in_day(600);
	s.sub_day(10);
	s.sub_month(1);
	s.sub_year(1);
	EXPECT_EQ(s.convert_date(), 194);
}


TEST(TestDate, TestDateInDaysSUPERHARD) {
	Date s;
	s.set_date_in_day(600);
	s.convert_date();
	s.sub_day(10);
	s.sub_month(1);
	s.sub_year(1);
	s.add_day(6);
	s.add_month(4);
	s.add_year(5);
	EXPECT_EQ(s.show_data(), std::to_string(19) + " days  " + std::to_string(10) + " month  " + std::to_string(5) + " year  ");
}

TEST(TestDate, TestDateInDaysSUPERHARD2) {
	Date s;
	s.set_date(6, 5, 7);
	s.sub_day(10);
	s.sub_month(1);
	s.sub_year(1);
	s.add_day(6);
	s.add_month(4);
	s.add_year(5);
	EXPECT_EQ(s.convert_date(), 4261);
}
// проверка gita
// проверка git2
// проверка unicode2