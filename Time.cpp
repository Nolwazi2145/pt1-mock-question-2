#include "Time.h"
using namespace std;


Time::Time(int h= 0, int m = 0)
{  
	hour = h;
	mins  = m;

}
Time::~Time()
{
}
int Time::getMin() const
{
	return mins;
}

int Time::getHour() const
{
	return hour;
}

void Time::SetTime(int hr, int min)
{
	hour = (hr >= 00 && hr <= 24) ? hr : 00;
	mins = (min >= 00 && min <= 60) ? min: 00;
}
 void Time::printTime()
{
	std::cout << "hours" << ":" << "minute" << endl;
}
 std::ostream& operator<<(std::ostream & out, const Time& time)
 {
	 out << time.getHour() << ":" << time.getMin();
	 return out;
 }