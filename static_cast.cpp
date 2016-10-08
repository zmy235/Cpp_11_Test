#include <iostream>

using namespace std;

int main()
{
	int n=9;
// const_cast 仅仅是复制 n 的比特位到 d，因此d 包含无用值。
	const int d =static_cast <const int & > (n);
	//d++;
	cout << d <<endl;

	double b = reinterpret_cast <double & > (n);
	cout << b <<endl;
	return 0;
}