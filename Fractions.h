	#ifndef Fractions_H
	#define Fractions_H

class Fractions
{
public:
	int num;
	int denom;
	Fractions();
	Fractions(int,int);
	Fractions operator+(Fractions);
	Fractions operator-(Fractions);
	Fractions operator*(Fractions);
	Fractions operator/(Fractions);
};

	
	#endif