//dam.h   --inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include<iostream>

//Base Class using DMA
class baseDMA
{
private:
    char* label;
    int rating;
public:
    //默认构造函数
    baseDMA(const char* l =  "Null", int r = 0);
    //默认构造函数重载,接受一个为baseDMA类的引用变量作传递参数
    baseDMA(const baseDMA &rs);
    //虚析构函数
    virtual ~baseDMA();
    //运算符重载，等于号作用在baseDMA类上，后面methods中具体定义
    baseDMA & operator=(const baseDMA &rs);
    //友元函数定义运算符重载
    friend std::ostream & operator<<(std::ostream &os, const baseDMA &rs);
};

//定义一个lacksDMA的子类，继承于baseDMA
class lacksDMA:public baseDMA
{
    private:
        //枚举
         enum{COL_LEN = 40};
        //
         char color[COL_LEN];
    public:
        //默认构造函数
        lacksDMA(const char * c = "Blank", const char *l = "null", int r = 0);
        //默认构造函数重载，接受多种传参形式，此处接受一个字符串指针变量和baseDMA类变量
        lacksDMA(const char * c, const baseDMA &rs );
        friend std::ostream & operator <<(std::ostream &os , const lacksDMA &rs);
};

//定义hasDMA子类，继承与baseDMA
class hasDMA:public baseDMA
{
    private:
        //字符or字符串指针变量
        char* style;
    public:
        //默认构造函数，多重重载方式，接受三种传递参数方式
        hasDMA(const char* s = "none", const char * l ="null", int r = 0);
        hasDMA(const char * s, const baseDMA & rs);
        hasDMA(const hasDMA &rs);
        //析构函数
        ~hasDMA();
        hasDMA & operator=(const hasDMA &rs);
        friend std::ostream & operator << (std::ostream &os, const hasDMA &rs);
};

#endif