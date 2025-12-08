#include "date.h"
#include <iostream>

date::date(int month, int day, int year)
	: month_(month),
	day_(day),
	year_(year)
{
}


int date::month() const
{
	return month_;
}

int date::day() const
{
	return day_;
}

int date::year() const
{
	return year_;
}