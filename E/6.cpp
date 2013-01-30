using namespace std;

#include <iostream>

int main(){
	
	long int sq = 0;
	long int sumSq = 0;
	long int answer = 0;
	for (int i = 0; i <= 100; i++)
	{
		sq += i * i; 
		sumSq += i;
	}
	sumSq *= sumSq;

	answer = sumSq - sq;
	cout << "The answer is " << answer << endl;


	return 0;
}
