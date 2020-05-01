#include <iostream>
using namespace std;

int FactSimple(int number)
{
    //Base Condition
    if(number == 1)
        return 1;
    else
    {
        return(number*FactSimple(number-1));
    }
}
int Factorial(int *a,int *result)
{
    cout << "value of a is:" << *a << "value of result is:" << *result << endl;
    //base condition
    if(*a == 1)
    {
        return 1;
    }
    else
    {
        return(*result * Factorial(a-1,result));
    }
}
int main()
{
    int a =0;
    int result = 1; 
    cin >> a;
    cout << "Fetched input. Number is = " << a << endl;
    //Factorial(&a,&result);
    result = FactSimple(a);
    cout << "Factorial value of " << a << " is: "<< result << endl;
    return 0;
}