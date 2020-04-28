//#pragma once
#ifndef STRNGBAD_H_
#define STRNGBAD_H_

#include<iostream>
class StringBad
{
public:
	StringBad();
	~StringBad();
	//friend functions
	friend std::ostream& operator<<(std::ostream& os, const StringBad& st);
	StringBad(const char* s);

private:
	char* str;
	int len;
	static int num_strings;
};

//StringBad::StringBad()
//{
//}
//
//StringBad::~StringBad()
//{
//}

#endif // !STRNBAD_H_
