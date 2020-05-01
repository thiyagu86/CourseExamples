#include <iostream>
using namespace std;

class Example
{
	int nVal; 
public:
	void setValue(const int &);
	int getValue();
};
void Example::setValue(const int &value)
{
    nVal = value;
}
int Example::getValue()
{
	return nVal;
}
int main()
{
	Example obj;
	obj.setValue(47);
	int val = obj.getValue();
	cout << "Value of val is: " << val << endl;
}