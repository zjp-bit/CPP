// formore.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//more looping with for

#include <iostream>
const int ArSize = 66;

int main()
{
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i - 1];

    //测试longlong整型在数据溢出时的情况
    for (int i = 1; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] <<"i="<< factorials[i] / factorials[i-1] << std::endl;

    
    
    //以下为测试boolean转int；额外测试
    using namespace std;

    std::cout.setf(ios_base::boolalpha);
    std::cout.setf(ios_base::fixed,ios_base::floatfield);
    int i = 5;
    std::cout << "测试boolean转int强制转换 boolean  "<<(i<5)<<endl;   //输出flase
    std::cout << "测试boolean转int强制转换 int  " << int(i < 5) << endl;//输出0
    std::cout << "测试boolean转double强制转换 double  " << double(i < 5) << endl;//输出0.000
// std::cout << "Hello World!\n";
    return 0;


   
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
