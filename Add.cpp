#include <iostream>
using namespace std;

int Add(int *a,int*b)
{
    return(*a+*b);
}
int main()
{
    int a =10;
    int b = 15;
    int sum = Add(&a,&b);
    cout << "Sum is: " << sum << endl;
    return 0;
}