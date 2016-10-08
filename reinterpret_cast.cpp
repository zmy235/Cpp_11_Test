#include <iostream>

using namespace std;

int main()
{
	int n=9;
// reinterpret_cast 仅仅是复制 n 的比特位到 d，因此d 包含无用值。
	double d=reinterpret_cast<double & > (n);
	cout << d <<endl;
	int b=reinterpret_cast<int & > (d);
	cout << b <<endl;
	return 0;
}