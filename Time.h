#ifndef Time_H
#define Time_H
#include <iostream>

class Time
{
private:
	int hour ;
	int mins;
public:
	Time(int , int );
	~Time();

	int getMin() const;
	int getHour() const;
	void SetTime(int , int );
	void printTime();
	friend std::ostream& operator<< (std::ostream&, const Time&);
};
#endif
