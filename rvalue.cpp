#include <iostream>
#include <string>
using namespace std;
char &get_val(string &str, string::size_type ix )
{
	return str[ix];
}
int main()
{
	string s("a value");
	cout << s << endl;
	get_val(s,0) = 'A'; //get_val函数调用作为左值
	cout << s << endl;
	return 0;
}