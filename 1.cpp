using namespace std;
#include <iostream>

int main()
{
	int result = 0;
	for(int i= 0; i<1000; i++)
	{
		if( i%3 == 0)
		{
			result += i;	
			cout << i << "   ";
		}
		else if( i%5 == 0)
		{
			result += i;	
			cout << i << "   ";
		}
	}
	cout << "the result is: " << result << endl;
	return 0;
}
