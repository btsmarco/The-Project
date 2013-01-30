using namespace std;

#include <iostream>
// Just need to work with the input to submit it
int main()
{
	int first = 0, count = 0, max = 0, second = 0, F;
	cout << "Please Enter the first number: ";
	cin >> first;
	F = first;

	cout << "Please Enter the second number: ";
	cin >> second;

	int n = 0;

	for(;;)
	{
		n = first;
		while (true)
		{
			count++;
			if (n ==1)
				break;
			else if ( n% 2 != 0)
			{
				n = (3*n) + 1;
			}
			else
			{
				n = n/2;
			}
		}
		if (count > max)
			max = count;
		count = 0;
		if(first == (second))
			break;
		first++;
	}
	
	cout << F  << " " << second <<" " << max << endl;
	return 0;
}
