#include <iostream>
#include <stdio.h>
using namespace std;


class Base {
public:
virtual void f() {
		printf("Base::f()");
}
virtual void g() {
	printf("Base::g()");
}
};

class Derived : public Base {
public:
virtual void f() {
		printf("Derived::f()");
}
virtual void g() {
	printf("Derived::g()");
}
virtual void k() {
	printf("Derived::k()");
}
};

int main()
{
	Base *b = new Derived;
	b->f();
	b->g();
	Base *d = new Base;
	Derived *t = dynamic_cast<Derived *>(d);
	t->f();
	t->g();
	t->k();
	return 0;
}