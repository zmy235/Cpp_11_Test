#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
 using namespace std;

int main()
{
    vector<int> c { 1,2,3,4,5,6,7 };
    int x = 5;
    c.erase(remove_if(c.begin(), c.end(), [x](int n) { return n < x; } ), c.end());
 
    cout << "c: ";
    for (auto i: c) 
    {
        cout << i << ' ';
    }
    cout << '\n';
 
    // the type of a closure cannot be named, but can be inferred with auto
    auto func1 = [](int i) { return i+4; };
    cout << "func1: " << func1(6) << '\n'; 
 
    // like all callable objects, closures can be captured in function
    // (this may incur unnecessary overhead)
    function<int(int)> func2 = [](int i) { return i+4; };
    cout << "func2: " << func2(6) << '\n'; 
}