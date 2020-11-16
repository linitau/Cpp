#include<iostream>

class Base//这是一个包含纯虚函数的抽象类
{
private:
    int x;
public:
    virtual void fun() = 0;//赋值0来声明纯虚函数
    Base():x{10}//使用构造函数初始化变量x
    {}
    int getX()
    {   
        fun();//可以在成员函数中调用纯虚函数，在构造函数和析构函数中不能调用
        return x;
    }
};

class B : public Base
{
public:
    void fun()
    {
        std::cout<<"this is a virtual function"<<std::endl;
    }
};

int main()
{
   B a;
   a.fun();
   int c;
   c = a.getX();
   std::cout<< c<<std::endl;
   return 0;

}
