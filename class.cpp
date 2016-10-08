#include <iostream>
using namespace std;

class A
{
private:
	int n2;
	int n1;

public:
	A():n2(0),n1(n2+2)
	{

	}
	A( A const & K)
	{
		K.n2;
		K.n1;
	}

	void fun()
	{
		cout<<"n1:"<<n1<<endl<<"n2:"<<n2<<endl;
	}

};

int main(int argc, char const *argv[])
{
	A a;
	a.fun();
	cout<<"sizeof A:"<<sizeof(A)<<endl<<"sizeof a:"<<sizeof(a)<<endl;

	return 0;
}