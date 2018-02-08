#include "closureAPI.h"
closure::closure()
	:incDec(0), first(1), second(1)
{
}
int closure::fib()
{
	first = second;
	second = first + second;
	return first;
}
closure::~closure()
{
}
