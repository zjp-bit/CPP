// MemoryAddressTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 此程序测试系统在分配内存时分别给个变量，常量，代码等存放的地址分配策略


#include <iostream>
using namespace std;

int p = 1;
int p1 = 2;

void fun1() {}
void fun2() {}

int main(int argc, char* argv[])
{
	const char* s1 = "这是第一个char型常量";
	static int  iss2 = 2;
	static int  is1;
	int* mi = (int*)malloc(sizeof(int) * 2);
	static int  iss1 = 1;
	static int  is2;
	char* mc = (char*)malloc(sizeof(char) * 2);
	
	int i, j;
	double d = 3.2;
	char* p;
	const char* s2 = "这是第二个char型常量";

	cout << "*****************代码区****************" << endl;
	cout << "fun1()子函数 " << (int*)fun1 << endl;
	cout << "fun2() 子函数" << (int*)fun2 << endl;
	cout << "main()主函数 " << (int*)main << endl;
	cout << "*****************代码区****************" << endl;
	cout << endl;
	cout << "*****************数据区****************" << endl;
	cout << "****文字常量**************" << endl;
	cout << "这是第一个char型常量 " << (int*)s1 << endl;
	cout << "这是第二个char型常量 " << (int*)s2 << endl;
	cout << "****未初始化的静态变量****" << endl;
	cout << "is1 " << &is1 << endl;
	cout << "is2 " << &is2 << endl;
	cout << "****初始化的静态变量******" << endl;
	cout << "iss1 " << &iss1 << endl;
	cout << "iss2 " << &iss2 << endl;
	cout << "*****************数据区****************" << endl;
	cout << endl;
	cout << "******************堆区*****************" << endl;
	cout << "mc " << (int*)mc << endl;
	cout << "mi " << (int*)mi << endl;
	cout << "******************堆区*****************" << endl;
	cout << endl;
	cout << "******************栈区*****************" << endl;
	cout << "&mc " << &mc << endl;
	cout << "&mi " << &mi << endl;
	cout << "&i " << &i << endl;
	cout << "&j " << &j << endl;
	cout << "&d " << &d << endl;
	cout << "&p " << &p << endl;
	cout << "******************栈区*****************" << endl;
	cout << endl;
	cout << "**************命令行参数区*************" << endl;
	cout << "argv[0] " << (int*)argv[0] << endl;
	cout << "**************命令行参数区*************" << endl;
	cout << endl;
}

//————————————————
//版权声明：本文为CSDN博主「大米粒ing」的原创文章，遵循 CC 4.0 BY - SA 版权协议，转载请附上原文出处链接及本声明。
//原文链接：https ://blog.csdn.net/chenyiming_1990/article/details/10151597

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
