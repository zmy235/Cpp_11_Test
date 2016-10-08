#include <iostream>
#include <cstring>
using namespace std;
class A{
    public:
        virtual void fun(){cout<<1<<endl;}
        virtual void fun2(){cout<<2<<endl;}
};
class B : public A{
    public:
        void fun(){cout<<3<<endl;}
        void fun2(){cout<<4<<endl;}
};
class C{
    public:
        virtual void fun3(){cout<<5<<endl;}
        void fun4(){cout<<6<<endl;}
};
void show()
{
	cout<<"woca"<<endl;
}

int main()
{
    void(*fun)(A*);
    A *p=new B;
    B *q=new B;
    C *c=new C;
    long lVptrAddr;
    memcpy(&lVptrAddr,p,4);
    memcpy(&fun,reinterpret_cast<long*>(lVptrAddr),4);
    fun(p);
    delete p;

    void(*funp)();
    funp=&show;
    funp();
    cout<<sizeof(funp)<<" adr "<<endl;
    cout<<sizeof(*funp)<<" void "<<endl;
    cout<<sizeof(&show)<<" adr "<<endl;


    cout<<sizeof(*p)<<endl
    <<sizeof(*q)<<endl
    <<sizeof(*c)<<endl;
    return 0;
}