// twoswap-mytest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
template <typename T>   //模板函数，
void Swap(T& a, T& b);

template<>void Swap<int>(int& a, int& b);//显式具体化：当使用模板函数的传递参数为整型时，不是调换a，b值，而是将a b值的和赋给a和b
struct job 
{
    char name[40];
    float salary;
    int age;
};

//template <typename T>//尝试使用模板函数和显式具体化来分别实现打印输出数组和单个整型数字，失败
//void Show(T &a);
//template<>void Show<int>(int a);

int main()
{
    using namespace std;
    job a;
    job b;

    cout << "Please input information for the function test:\n"
        << "a name: ";
    cin >> a.name;
    cout << "a salary: ";
    cin >> a.salary;
    cout << "a age: ";
    cin >> a.age;

    cout 
        << "b name: ";
    cin >> b.name;
    cout << "b salary: ";
    cin >> b.salary;
    cout << "b age: ";
    cin >> b.age;


    //std::cout << "Hello World!\n";
}

template <typename T>
void Swap(T& a, T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
template<>void Swap<int>(int& a, int& b)
{
    int temp = a + b;
    a = temp;
    b = temp;
}
//template <typename T>

/*void Show(T& a)
{
    using namespace std;
    cout<<a.
}*/

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
