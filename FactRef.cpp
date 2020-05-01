#include <iostream>
using namespace std;

void Factorial(int number,int &res)
{
	res = 1;
	for(int i = 1;i <= number;i++)
	{
		res = res * i;
	}
}

int main()
{
	cout << "Enter the number for which Factorial needs to be printed: " << endl;
	int number = 0;
	cin >> number;
	int res;
	Factorial(number,res);
	cout << "The factorial of " << number << " is: " << res << endl;
}