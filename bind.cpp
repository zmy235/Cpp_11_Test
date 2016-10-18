#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> coll;
    for (int i = 1; i <= 16; ++i)
    {
        coll.push_back(i);
    }

    // 查找元素值大于10的元素的个数
    // 也就是使得10 < elem成立的元素个数
    int res = count_if(coll.begin(), coll.end(), bind1st(less<int>(), 10));
    cout << res << endl;

    // 查找元素值小于10的元素的个数
    // 也就是使得elem < 10成立的元素个数
    res = count_if(coll.begin(), coll.end(), bind2nd(less<int>(), 10));
    cout << res << endl;


    return 0;
}