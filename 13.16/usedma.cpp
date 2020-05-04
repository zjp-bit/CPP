//主函数，对继承的实现过程

#include<iostream>
#include"dma.h"

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    baseDMA shirt("Portabelly",8);
    lacksDMA balloon("red","Blimpo",4);
    hasDMA map("Mercator","Buffalo Keys",5);
    cout<<"Displaying baseDMA object: \n";
    cout<<shirt<<endl;
     cout<<"Displaying lacksDMA object: \n";
     cout<<balloon<<endl;
     lacksDMA balloon2(balloon);
     cout<<"result of lacksDMA copy:\n";
     cout<<balloon2<<endl;
     hasDMA map2;
     map2 = map;
     cout<<"Result of hasDMA assignment: \n";
     cout<<map2<<endl;
     return 0;
}

