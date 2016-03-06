#include <iostream>
#include "Fractions.h"


using namespace std;

Fractions::Fractions()
{
}


Fractions::Fractions(int a,int b)
{
num = a;
denom = b;
}

//operator+,used to add two objects and return the result
Fractions Fractions::operator+(Fractions obj){
	Fractions result;
	result.num = num*obj.denom+denom*obj.num;
	result.denom = denom*obj.denom;
	return result;
}

//operator-,used to subtract two objects and return the result
Fractions Fractions::operator-(Fractions obj){
	Fractions result;
	result.num = num*obj.denom-denom*obj.num;
	result.denom = denom*obj.denom;
	return result;
}
 //operator*,used to multiply two objects and return the result  
	Fractions Fractions::operator*(Fractions obj){
	Fractions result;
	result.num = num*obj.num;
	result.denom = denom*obj.denom;
	return result;
}

	//operator/,used to divide two objects and return the result
	Fractions Fractions::operator/(Fractions obj){
	Fractions result;
	result.num = num*obj.denom;
	result.denom = denom*obj.num;
	return result;
}
