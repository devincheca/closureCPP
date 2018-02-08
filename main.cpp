// Devin Checa
using namespace std;
#include <iostream>
#include "closureAPI.h"
int main()
{
	closure seq;
	for (int i = 0; i < 10; i++)
	{
		cout 
			<< seq.fib() 
			<< endl;
	}
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			cout
				<< seq.adder()
				<< endl;
		}
		else 
		{
			cout 
				<< seq.decer()
				<< endl;
		}
	}
	system("pause");
	return 0;
}
