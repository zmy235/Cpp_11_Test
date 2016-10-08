#include <iostream>
#include <vector>
#include <string>
#include <tuple>
using namespace std;
/*
 * tuple.cpp
 *
 *  Created on: 2016.9.30
 *      Author: VeiZi
 */


tuple<string, int> giveName(void)
{
	string cw("VeiZi");
	int a(2016);
	tuple<string, int> t = make_tuple(cw, a);
	return t;
}

int main()
{
	tuple<int, double, string> t(64, 128.0, "VeiZi");
	tuple<string, string, int> t2 =
			make_tuple("VeiZi", "Wendy", 1993);

	//返回元素个数
	size_t num = tuple_size<decltype(t)>::value;
	cout << "num = " << num << endl;

	//获取第1个值的元素类型
	tuple_element<1, decltype(t)>::type cnt = get<1>(t);
	cout << "cnt = " << cnt << endl;

	//比较
	tuple<int, int> ti(24, 48);
	tuple<double, double> td(28.0, 56.0);
	bool b = (ti < td);
	cout << "b = " << b << endl;

	//tuple作为返回值
	auto a = giveName();
	cout << "name: " << get<0>(a)
			<< " years: " << get<1>(a) << endl;

	return 0;
}
