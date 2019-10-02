#include "Operations.h"
#include<cmath>


Operations::Operations(double number1, double number2) 
{
	m_number1 = number1;
	m_number2 = number2;
}

Operations::~Operations()
{

}

double Operations::add()
{
	return(m_number1 + m_number2);
}

double Operations::minus()
{
	return(m_number1 - m_number2);
}

double Operations::multiply()
{
	return(m_number1 * m_number2);
}

double Operations::divide()
{
	return(m_number1 / m_number2);
}

double Operations::modulus()
{
	return fmod(m_number1,m_number2);
}

