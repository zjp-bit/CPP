﻿// protos.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// using prototypes and functions calls

#include <iostream>
void cheers(int);    //子函数声明
double cube(double &);
double cube(double);
int main()    ///主函数
{
    using namespace std;
    cheers(5);              //使用子函数，函数调用
    cout << "Give me a number: ";                //输出
    double side;
    cin >> side;
    double volume = cube(side);
    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n";
    cheers(cube(2));          //prototype protection at work
    return 0;

    //std::cout << "Hello World!\n";
}

void cheers(int n)                    //子函数定义和方法实现
{
    using namespace std;         //子函数从传递参数获取变量，打印
    for (int i = 0; i < n; i++)
        cout << "Cheers! ";
    cout << endl;
}
double cube(double &x)
{
    return x * x * x;
}

double cube(double x)
{
    return x*x*x;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧:
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
