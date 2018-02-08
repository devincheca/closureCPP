#include "closureAPI.h"
closure::closure()
	:incDec(0), first(0), second(1)
{
}
int closure::adder()
{
	return incDec++;
}
int closure::decer()
{
	return incDec--;
}
int closure::fib()
{
	int temp = first;
	first = second;
	second = first + temp;
	return temp;
}
closure::~closure()
{
}
