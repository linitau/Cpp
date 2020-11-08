#include<iostream>
#include "headerfile.h"//在.h头文件中定义函数

int add_num(int& i, int& j)
{
   show_num(i);
   return i+j;
}
void show_num(const int& a)
{
    std::cout<<a<<std::endl;
}
int main()
{
    int a=10,b=30;
    add_num(a,b);
    return 0;
}
