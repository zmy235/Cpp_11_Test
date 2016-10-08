#include <iostream>
#include <string>
using namespace std;

int main()
{
    char *a="abc";
    char *b="abc";

    const string aa="abc";
    const string bb="abc";

	cout<<(a==b)<<endl<<(aa==bb);
	return 0;
}
