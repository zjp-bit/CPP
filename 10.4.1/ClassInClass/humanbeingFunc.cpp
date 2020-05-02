#include"class1.h"
#include<iostream>

void Humanbeing::pay_money(float pay)
{
	if (pay > wealth)
		std::cout << "You are a qiong B. You don't have enough money to pay for it!\n";
	else
	{
		wealth -= pay;
		std::cout << "Congratuation! You had successfully to pay ¥" << pay << "for it\n";
	}
}

void Humanbeing::work(float salary, int time)
{

	wealth += salary * time;
}

void Humanbeing::walk(float direction[2])
{	
	location[0] += direction[0];
	location[1] += direction[1];
}

void Humanbeing::Show()
{
	using namespace std;
	cout << "My name is" << name << endl;

}
Humanbeing::Humanbeing()
{
	name = "Jim Green";
	sex = 1;
	height_human = 170;
	weight_human = 65;
	float location[] = { 0.0,0.0 };
	salary = 100;
	wealth = 10000;
}


Humanbeing::~Humanbeing()
{//Nothing for this function
}