#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long int BigNum = 600851475143;
	//int BigNum = 13195;
	vector<int> fac;
	int i = 2;
	//for(int i = 2;i < 10000000;i++)
	while(true)
	{
		if(BigNum %i == 0)
		{
			BigNum /=i;
			fac.push_back(i);
		}
		if (BigNum == 1)
		{
			break;
		}
		i++;
	}
		/*
		if(BigNum%2 == 0)
		{
			BigNum /= 2;
			fac.push_back(2);
			continue;
		}
		if(BigNum%3 == 0)
		{
			BigNum /= 3;
			fac.push_back(3);
			continue;
		}
		if(BigNum%5 == 0)
		{
			BigNum /= 5;
			fac.push_back(5);
			continue;
		}
		*/

		cout << "The Numbers are :"<< endl;	
		for(vector<int>::iterator c= fac.begin();c != fac.end(); c++ )
		{
			cout << *c << "  ";	
		}	
		cout << endl;
	return 0;
}

