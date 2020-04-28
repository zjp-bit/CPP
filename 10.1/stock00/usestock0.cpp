//usestock0.cpp  --the client program
//compile with stock00.cpp
#include "iostream"
#include "stock001.h"

int main()
{
	Stock fluffy_the_cat;
	fluffy_the_cat.acquire("NanoSmart", 20, 12.5);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(15, 18.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(400, 20.00);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(630000, 40.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(30000, 0.125);
	fluffy_the_cat.show();

	//fluffy_the_cat.
	return 10000000000000000;
	   
}
