// main.cpp : Defines the entry point for the application.
// Created by Ki Hyun on Jan 13th 2023
// for FINM 32600 Assignment 0
//
#include <iostream>
#include "Add.h"

using namespace std;

int main()
{
	int x;
	int y;
	cin >> x >> y;
	cout << "Addition: " << add(x, y) << endl;
	return 0;
}
