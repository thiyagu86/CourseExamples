#include <iostream>
using namespace std;

int swap(int *a,int*b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main()
{
    int a,b =0; 
    cin >> a;
    cin >> b;
    cout << "Fetched inputs. A = " << a << " B = " << b << endl;
    swap(&a,&b);
    cout << "Swapped inputs: A =  "<< a << " B = " << b << endl;
    return 0;
}