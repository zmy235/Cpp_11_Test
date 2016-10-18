
#include <functional>
#include <iostream>
using namespace std;function<int(int)> Func;

// 普通函数
int TestFunc(int a)
{
    return a;
}

// Lambda表达式
auto lambda = [](int a)->int{ return a; };

// 仿函数(functor)
class Functor
{
public:
    int operator()(int a)
    {
        return a;
    }
};

// 1.类成员函数
// 2.类静态函数
class TestClass
{
public:
    int ClassMember(int a) { return a; }
    static int StaticMember(int a) { return a; }
};

int main()
{
    

    Func = TestFunc;// 普通函数
    int result = Func(10);
    cout<<result<<endl;    
    
    

    Func = lambda;// Lambda表达式
    result = Func(20);
    cout<<result<<endl;    
    
    

    Functor testFunctor;// 仿函数
    Func = testFunctor;
    result = Func(30);
    cout<<result<<endl;    
    
    

    TestClass testObj;// 类成员函数
    Func = bind(&TestClass::ClassMember, testObj, placeholders::_1);
    result = Func(40);
    cout<<result<<endl;    

    

    Func = TestClass::StaticMember;// 类静态函数
    result = Func(50);
    cout<<result<<endl;  

    return 0;
}