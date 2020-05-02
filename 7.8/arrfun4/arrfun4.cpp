﻿// arrfun4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// functions with an array range

#include <iostream>
const int ArSize = 8;
int sum_arr(const int* begin, const int* end);

int main()
{
    using namespace std;
    int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };

    int sum = sum_arr(cookies, cookies + ArSize);
    cout << "Total cookies eaten: " << sum << endl;
    sum = sum_arr(cookies, cookies + 3);
    cout << "First three eater ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, cookies + 8);
    cout << "Last four eater ate " << sum << " cookies.\n";

    return 0;

    //std::cout << "Hello World!\n";
}

int sum_arr(const int* begin, const int* end)
{
    const int* pt;
    int total = 0;
    for (pt = begin; pt != end; pt++)
        total = total + *pt;
    return total;

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
