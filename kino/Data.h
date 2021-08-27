#ifndef Data.h
#define Data.h
#include <string>
#include <iostream>
class Data
{
private:
	int year;
	int month;
	int day;
	int hour;
	int minute;
public:
	void SetData(int year, int month, int day, int hour, int minute);
	void GetData();
};
#endif
