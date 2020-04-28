// choices.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//array variations

#include <iostream>
#include <vector>
#include <array>

int main()
{
    using namespace std;
    //C,orignal C++
    double a1[4] = { 1.2, 2.4, 3.6, 4.8 };
    //C++98 STL
    vector<double> a2(4);  //create vector with 4 elements

    //no simple way to initialize in C98
    a2[0] = 1.0 / 3.0;
    a2[1] = 1.0 / 5.0;
    a2[2] = 1.0 / 7.0;
    a2[3] = 1.0 / 9.0;

    //C++ --create and ininitialize array object

    array<double, 4 >a3 = { 3.14, 2.72, 1.62, 1.41 };
    array<double, 4>a4;
    a4 = a3;

    //use array notation
    cout << "a1[2]: " << a1[2] << "at" << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << "at" << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << "at" << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << "at" << &a4[2] << endl;

    //misdeed
    a1[-2] = 20.2;
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    return 0;

   // std::cout << "Hello World!\n";
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
