#include <iostream>
#include <tuple>
using namespace std;

int main(int argc, char const *argv[])
{
	tuple<int, string, float> t1(10, "Test", 3.14);
	int m;
	float n;
	tie(m,ignore,n) = t1;
	auto t2 = tuple_cat(t1, make_pair("Foo", "bar"), tie(n,m,m));
	
	cout <<"size:"<< tuple_size<decltype(t2)>::value <<endl;
	cout <<"1:"<< get<0>(t2) <<endl;
	cout <<"2:"<< get<1>(t2) <<endl;
	cout <<"3:"<< get<2>(t2) <<endl;
	cout <<"4:"<< get<3>(t2) <<endl;
	cout <<"5:"<< get<4>(t2) <<endl;
	cout <<"6:"<< get<5>(t2) <<endl;
	cout <<"7:"<< get<6>(t2) <<endl;
	cout <<"8:"<< get<7>(t2) <<endl;
	
	return 0;
}
