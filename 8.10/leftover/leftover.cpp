﻿// leftover.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// overloading the left() function

#include <iostream>
unsigned long left(unsigned long num, unsigned ct);
char* left(const char* str, int n = 1);


int main()
{
    using namespace std;
    const char* trip= "Hawaii!!!";
   // *trip ;
    unsigned long n = 12345678;
    int i;
    char* temp;
    for (i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        temp = left(trip, i);
        cout << temp << endl;
        delete[]temp;

     }
    return 0;

    //std::cout << "Hello World!\n";
}

unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;
    if (ct == 0 || num == 0)
        return 0;
    while (n /= 10)
        digits++;
    if (digits > ct)
    {
        ct = digits - ct;
        while (ct--)
            num /= 10;
        return num;
    }
    else
        return num;
}

char* left(const char* str, int n)
{
    if (n < 0)
        n = 0;
    char* p = new char[n + 1];
    int i;
    for (i = 0; i < n && str[i]; i++)
        p[i] = str[i];
    while (i <= n)
        p[i++] = '\0';
    return p;
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
