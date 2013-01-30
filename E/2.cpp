using namespace std;
#include <iostream>

int main()
{
	int first = 1;
	int second = 2;
	int Fib = 0;
	int SUM = 2;
	while(true) 
	{
		Fib = first + second;
		first = second;
		second = Fib;
		if (Fib >= 4000000)
		{
			break;
		}
		if (Fib%2 == 0)
		{
			SUM += Fib;
		}
		//cout << Fib << endl;
	}
	cout << "The SUM is: " << SUM << endl;


	return 0;
}
