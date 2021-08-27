
#include "Data.h"

using namespace std;


class Data{
private:
	int year;
	int month;
	int day;
	int hour;
	int minute;


public:
	void SetData(int year,int month,int day,int hour,int minute) {
		this->year = year;
		this->month = month;
		this->day = day;
		this->hour = hour;
		this->minute = minute;

	}
	void GetData() {
		cout << "Dzieñ " << day << "." << month << "." << year << " godzina " << hour << ":" << minute<<endl;
	}
};