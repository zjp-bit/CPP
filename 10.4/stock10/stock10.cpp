//stock10.cpp  为Stock类新增构建，释放功能

#include<iostream>
#include"stock10.h"

//构建stock类，设置初始值
Stock::Stock()    //类似于重载函数，相同的函数名，不同的函数传递参数
{
	std::cout << "Default constructor called\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string& co, long n, double pr)  //普通的默认初始值设置函数
{
	std::cout << "Constructor using " << co << " called\n";
	company = co;

	if (n < 0)
	{
		std::cout << "number of share can't be negative; "
			<< company << " share set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()   //释放Stock 类
{
	std::cout << "Bye, " << company << "!\n";
}

//定义类的其他成员函数
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of share purchased can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();		
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have!"
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	using namespace std;
	using std::ios_base;
	//默认的打印设置会有科学计数，我们使用一下方法将double的显示方式设置成保留小数点3位 #.###
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	cout << "Company: " << company
		<< "  Shares: " << shares << '\n';
	cout << "  Shares price:$" << share_val;
	//默认的打印设置会有科学计数，我们使用一下方法将double的显示方式设置成保留小数点2位 #.###
	cout.precision(2);
	cout << " Total worth:$" << total_val << '\n';

	//
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}