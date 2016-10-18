#include <iostream>     //cout
#include <algorithm>    //count_if
#include <vector>       //vector
using namespace std;

bool IsOdd (int i) 
{ 
	return (i%2)==1; 
}

int main () 
{
	vector<int> myvector;
	
	for(int i=1; i<10; i++) 
		myvector.push_back(i); 

	int mycount = count_if (myvector.begin(), myvector.end(), IsOdd);

	cout << "myvector contains " << mycount  << " odd values.\n";

	return 0;
}