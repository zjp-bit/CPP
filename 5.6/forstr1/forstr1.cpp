// forstr1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// using for with a string

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;
    
    //display letters in reverse order 
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << "\nBye.\n接下来使用new分配一个内存空间给word的反向存储和输出" << endl;
    
    char* p=new char;
    //int* int_p;
    //将字符串反向存储到一个new无变量名地址空间，并打印出来
   // cout << *p->size << endl;
    for (int i = word.size() - 1; i >= 0; i--)        
       p[word.size()-i] =  word[i];
        
    cout << p << endl;

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
