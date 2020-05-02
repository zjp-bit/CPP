//support.cpp  ʹ���ⲿ����
//��external.cppһ�����
#include<iostream>
extern double warming; //using warming from another file

//function prototypes
void update(double dt);
void local();
using namespace std;
void update(double dt)
{
	extern double warming;
	warming += dt;
	cout << "Updating global warming to " << warming;
	cout << " degrees.\n";
}

void local()
{
	double warming = 0.8;
	cout << "Local warming = " << warming << " degrees.\n";
	//Access global variable with the scope resolution operator
	cout << "But golbal warming = " << ::warming;
	cout << " degrees.\n";
}