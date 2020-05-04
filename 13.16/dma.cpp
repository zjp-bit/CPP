//头文件dma.h中的各种methods实现
//

#include"dma.h"
#include<cstring>

//基类baseDMA的methods实现
baseDMA::baseDMA(const char*l, int r)
{
    //给label字符串指针变量分配与传递参数长度+1的一个内存空间大小
    label = new char [std::strlen(l)+1];
    //将传参通过strcpy复制给lable，疑问：这里label是指针，但传递给strcpy指针实际上是对指针所指地址内容的操作？
    std::strcpy(label, l);
    //赋值rating
    rating =r;
}

baseDMA::baseDMA(const baseDMA &rs)
{
    //测量baseDMA类的传参rs私有成员label长度，并依据其结果给lable分配内存
    label = new char[std::strlen(rs.label)+1];
    //将baseDMA类的传参rs其他私有成员传递给新构造对象
    std::strcpy(label,rs.label);
    rating = rs.rating;
}

baseDMA::~baseDMA()
{
    //在类操作结束后，释放用new给lable分配的内存
    delete [] label;
}

baseDMA & baseDMA::operator=(const baseDMA &rs)
{
    if(this == & rs)  //如果类变量地址相同，返回此类this指针
        return *this;
    delete [] label;
    label = new char[std::strlen(rs.label)+1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

std::ostream &operator << (std::ostream &os ,const baseDMA &rs)
{
    os<<"Label: "<<rs.label<<std::endl;
    os<<"Rating: "<<rs.rating<<std::endl;
    return os;
}

//子类lacksDMA的实现methods
lacksDMA::lacksDMA(const char* c, const char* l, int r)
:baseDMA(l,r)   //此处的“：”成员初始化列表
{
        std::strncpy(color,c,39);
        color[39] = '\0';
}

lacksDMA::lacksDMA(const char *c, const baseDMA &rs)
:baseDMA(rs)
{
        std::strncpy(color,c,COL_LEN -1);
        color[COL_LEN-1]= '\0'; //“\0' 是字符串的结束符,任何字符串之后都会自动加上'\0'
}

std::ostream &operator<<(std::ostream &os, const lacksDMA &rs)
{
    os<<(const baseDMA &) rs;    //没理解
    os<<"Color: "<<rs.color<<std::endl;
    return os;
}

//子类hasDMA类的实现methods
hasDMA::hasDMA(const char *s, const char * l, int r)
:baseDMA(l,r)
{
    style = new char [std::strlen(s)+1];
    std::strcpy(style,s);
}

hasDMA::hasDMA(const char *s, const baseDMA &rs)
:baseDMA(rs)
{
        style = new char[std::strlen(s) + 1 ];
        std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &rs)
:baseDMA(rs)
{
        style = new char[std::strlen(rs.style) + 1];
        std::strcpy(style, rs.style);
}

hasDMA::~hasDMA()
{
        delete [] style;
}

hasDMA &hasDMA::operator=(const hasDMA & hs)
{
        if(this == &hs)
                return *this;
        baseDMA::operator=(hs);
        delete [] style;
        style = new char[std::strlen(hs.style)+1];
        std::strcpy(style, hs.style);
        return *this;
}

std::ostream &operator<<(std::ostream & os ,const hasDMA &hs)
{
        os<< (const baseDMA & )hs;
        os<<"Style:  "<<hs.style<<std::endl;
        return os;
}

