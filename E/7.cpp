using namespace std;

#include <iostream>
bool Is_Done(int);
int count = 6;
int main()
{
	int num = 14;
	int d = 2;
	bool bulb = false;
	while(true)
	{
		if(num % d == 0)
		{
			d = 2;
			num++;
		}
		else
		{
			d++;
		}
		if(num == (d+1))
		{
			bulb = Is_Done(num);
			if(bulb)
			{
				break;
			}
			num++;
			d = 2;
		}
	}
	cout << "The num is " << num << endl;
	return 0;
}

bool Is_Done(int prime)
{
	count++;
	if(count == 10001)
	{
		return true;
	}
	else
	{
		return false;
	}
}
