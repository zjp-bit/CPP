// funtemp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// using a function template

#include <iostream>
//function template prototype

template <typename T>  //or class T
void Swap(T& a, T& b);

int main()
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i,j = " << i << "," << j << ".\n";
    cout << "Using complier-generated int swapper: \n";
    Swap(i, j);
    cout << "Now i,j = " << i << "," << j << ".\n";

    double x = 24.6;
    double y = 82.8;
    cout << "x,y = " << x << "," << y << ".\n";
    Swap(x, y);
    cout << "Using complier-generated double swaper: \n";
    //Swap(x, y);
    cout << "Now x,y = " << x << "," << y << ".\n";

    return 0;

    //std::cout << "Hello World!\n";
}

template <typename T>
void Swap(T &a,T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
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
