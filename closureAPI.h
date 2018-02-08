// Devin Checa
using namespace std;
#pragma once
#ifndef CLOSURE_H
#define CLOSURE_H
class closure
{
	private:
		int incDec;
		int first;
		int second;
	public:
		closure();
		int fib();
		int adder();
		int decer();
		~closure();
};
#endif // !CLOSURE_H

