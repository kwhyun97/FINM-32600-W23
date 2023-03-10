#include "Counter.h"

int Counter::count_ = 0;

int Counter::GetCount()
{
	return count_;
}
void Counter::Increment()
{
	count_++;
}
