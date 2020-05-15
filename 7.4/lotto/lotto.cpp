// lotto.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// probability of winning
//该程序计算一种彩票的中奖概率

#include <iostream>
long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;
    double total, choices;
    cout << "输入这次抽奖中的可选卡片总数个数\n"
        "每次可以抽选的张数:\n";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "你将在 ";
        cout << probability(total, choices);
        cout << " 把游戏中有一次中奖的可能.\n";
        cout << "请继续输入 (q to quit): ";
    }
    cout << "bye\n";
    return 0;

    //std::cout << "Hello World!\n";
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
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
