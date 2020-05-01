#include <iostream>
using namespace std;

void Add(int a,int b,int &res)
{
	res = a +b;
}

int main()
{
    int a = 10;
    int b =15;
    int res;
    Add(a,b,res);
    cout <<"The value of res is: " << res << endl;
	return 0;
}