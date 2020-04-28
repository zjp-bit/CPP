﻿// inline.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// using a inline function

#include <iostream>
inline double square(double x) { return x * x; }
#define square_d(x) x*x

int main()
{
    using namespace std;
    double a, b,a_d,b_d;
    double c = 13.0;

    a = square(5.0);
    a_d = square_d(5.0);
    b = square(4.5 + 7.5);  //can pass expression
    b_d = square_d(4.5 + 7.5);

    cout << "a = " << a << ", a_d(inline square(5.0)) = " << a_d<< "\n";
    cout << "b = " << b << ", b_d(define square(4.5+7.5)) = " << b_d << "\n";
    cout << "c = " << c << ", c (inline squared) = " << square(c++) << "\n";
    cout << "c = " << c << ", c (define square) = " << square_d(c++) << "\n";

    return 0;
    //std::cout << "Hello World!\n";
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
