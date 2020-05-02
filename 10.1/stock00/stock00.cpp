// stock00.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "stock001.h"
void Stock::acquire(const std::string &co,long n,double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative;"
            << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
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
    else if(num>shares)
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
    using std::cout;   //使用名称空间std::cout
    using std::ios_base;  //使用名称空间std::ios_base
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);   //
    std::streamsize prec = cout.precision(3);
    

    cout << "Company: " << company
        << "  Shares: " << shares << '\n'
        << "  Shares Price:$" << share_val;
     
    //设置显示方式为小数点后保留两位 #.##
    cout.precision(2);

    cout << "  Total Worth:$" << total_val << '\n';

    //复位显示方式设置
    cout.setf(orig,ios_base::floatfield);
    cout.precision(prec);

}

//int main()
//{
//    
//
//    std::cout << "Hello World!\n";
//}
//
//void Stock::buy()
//{
//
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
