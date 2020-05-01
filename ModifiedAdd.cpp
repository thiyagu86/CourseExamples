#include <iostream>
using namespace std;

int ModAdd(int *a,int*b,int *result)
{
    *result = (*a+*b);
}
int main()
{
    int a =10;
    int b = 15;
    int res = 0;
    ModAdd(&a,&b,&res);
    cout << "Modified Sum is: " << res << endl;
    return 0;
}