#ifndef DATE_H
#define DATE_H

class date
{
public:
	date(int month, int day, int year);

	int month() const;
	int day() const;
	int year() const;

private:

	int month_;
	int day_;
	int year_;
};

#endif 