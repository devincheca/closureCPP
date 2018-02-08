// Devin Checa
using namespace std;
#include <iostream>
#include "closureAPI.h"
int main()
{
	closure seq;
	for (int i = 0; i < 10; i++)
	{
		cout << seq.fib() << endl;
	}
	system("pause");
	return 0;
}
