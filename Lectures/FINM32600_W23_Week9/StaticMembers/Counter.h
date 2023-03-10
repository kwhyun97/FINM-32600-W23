#pragma once

class Counter
{
public:
	static int GetCount();
	static void Increment();

private:
	static int count_;
};