#include "pch.h"
#include "..//..//Class Date/Class Date/Date.cpp"

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
// проверка gita
// проверка git2
// проверка unicode2