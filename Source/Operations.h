#pragma once
#include <iostream>
using namespace std;

#ifndef OPERATIONS_H
#define OPERATIONS_H
class Operations {

public:
	
	
	
	Operations(double number1, double number2);

	~Operations();

	double add();
	double minus();
	double multiply();
	double divide();
	double modulus();
	


	double m_number1;
	double m_number2;

};
#endif