// C++mixtypes.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

struct antarctica_year_end
{
    int year;
    //some really interesting data, etc.

};
int main()
{
    using namespace std;
    antarctica_year_end s01, s02, s03;
    s01.year = 1988;
    antarctica_year_end* pa = &s02;
    pa->year = 1999;
    antarctica_year_end trio[3];
    trio[1].year = 2020;
    cout << (trio+1)->year << endl;
    cout << "Array trio address: " << trio << endl;
    const antarctica_year_end* arp[3] = { &s01,&s02,&s03 };
    cout << arp[1]->year << endl;
    const antarctica_year_end** ppa = arp;
    auto ppb = arp;

    cout << (*ppa)->year << endl;
    cout << (*(ppb + 1))->year << endl;

    return(0);


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
