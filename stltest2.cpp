#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector <int> intVector(100);

int main()
{
	intVector[20] = 50;
	vector <int>::iterator intIter = find(intVector.begin(), intVector.end(),50);
	if(intIter != intVector.end())
	{
		cout <<"Vector contains value: " << *intIter << endl;
	}		
	else
	{
		cout << "Vector does not contain 50" << endl;
	}
	return 0;
}
