//字符串及char数组 的关系测试
//string.cpp  storing string in an array

#include <iostream>
//因为要使用strlen（）函数，所以申明包含一下cstring头文件
#include <cstring>

int main()
{
    using namespace std;
    const int Size = 15;
    
    char name2[Size]= "C++owBoy";  //申明char数组name2[size]，并且初始化使用双引号赋值
    char name1[Size];    //申明char数组，并未i完成初始化
    cout <<"注意到，输入的字符串长度可能会超过规定长度而造成溢出，溢出的情形请自行脑补"<<endl;
    cout<<"Howdy! I'm "<<name2;
    cout<<"! What's your name?\n";
    cin>>name1;       //使用输入流函数std::cin从键盘输入字符串
    cout<<"Well, "<<name1<<", your name has ";
    cout<<strlen(name1)<<" letters and is stored\n";
    cout<<"in an array of "<<sizeof(name1)<<" bytes.\n";
    cout<<"Your initial is "<<name1[0]<<". \n";
    name2[4]='\0';   //将char数组的第4位赋值为'\0'后，使用字符串函数等将默认char数组里表示的字符串到'\0'为止
    cout <<"Here are the first 4 characters of my name : ";
    cout <<name2<<endl;

    return 0;
}
