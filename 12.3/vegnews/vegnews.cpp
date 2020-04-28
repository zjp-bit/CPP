// vegnews.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// compile with strngbad.cpp

#include <iostream>

#include"strngbad.h"
//#define _CRT_SECURE_NO_WARNINGS


using std::cout;
void callme1(StringBad&);
void callme2(StringBad);
void stringbadtest();
int main()
{
    stringbadtest();
    //std::cout << "Hello World!\n";
    std::cout << "End of main()\n";
}

void callme1(StringBad&rsb)
{
    cout << "String passed by reference:\n";
    cout << "   \"" << rsb << "\"\n";
}

void callme2(StringBad rsb)
{
    cout << "String passed by value:\n";
    cout << "  \"" << rsb << "\"\n";
}

void stringbadtest()
{
    using std::endl;
    {
        cout << "Strating an inner block.\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "Sports : " << sports << endl;
        callme1(headline1);
        cout << "headline1: " << headline1 << endl;
        callme2(headline2);
        cout << "Initialize one boject to another:\n";
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:\n";
        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";
    }
    cout << "End of stringbadtest()\n";    
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
