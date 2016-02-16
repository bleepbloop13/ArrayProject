/*
 * Array.cpp
 *
 *  Created on: Feb 8, 2016
 *      Author: rbak9218
 */

#include "Array.h"
#include <iostream>
using namespace std;

Array::Array()
{
	doubleArray = new double[6];
	doubleArray[3] = 40.2;
	intArray = new int[3];
	intArray[2] = 1;
}

void Array::start()
{
 cout << doubleArray[3] << endl;
 cout << intArray[2] << endl;
}


