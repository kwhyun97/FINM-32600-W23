#include "Counter.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	Counter counter1;
	Counter counter2;

	counter1.Increment();

	cout << "counter1.GetCount:" << counter1.GetCount() << endl;
	cout << "counter2.GetCount:" << counter2.GetCount() << endl;
	
	Counter::Increment();

	cout << "counter1.GetCount:" << counter1.GetCount() << endl;
	cout << "counter2.GetCount:" << counter2.GetCount() << endl;
}