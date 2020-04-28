//#pragma once

#ifndef MYTIME2_H_
#define MYTIME2_H_

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void Addmin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time& t)const;
	Time operator-(const Time& t)const;
	Time operator*(const double n)const;
	void Show()const;
};
#endif // !MYTIME1_H_




