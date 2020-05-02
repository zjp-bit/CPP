//#pragma once
#ifndef _CLASS1_H_
#define _CLASS1_H_
#include <string>
//#include"class2.h"

class Humanbeing
{
	
public:
	Humanbeing();  //构造函数
	~Humanbeing(); //析构函数
	//void speed(poision[]);    //
	void walk(float direction[2]);   //
	void work(float salary,int minutes);   //
	void pay_money(float pay);
	void Show();
	//void update();
	//Pet::pet_age;

private:
	std::string name;  //
	bool sex;          //1:male  0 female
	int height_human;  //cm
	int weight_human;  //kg
	float location[2];  //
	float salary;
	float wealth;
};




#endif // !_CLASS1_H_


