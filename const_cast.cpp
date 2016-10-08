#include <iostream>

using namespace std;

int main()
{
	const int n=9;
// const_cast 仅仅是复制 n 的比特位到 d，因此d 包含无用值。
	int d=const_cast<int & > (n);
	cout << d <<endl;
	d++;
	cout << d <<endl;
	return 0;
}