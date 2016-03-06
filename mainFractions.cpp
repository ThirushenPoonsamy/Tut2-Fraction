#include<iostream>
#include "Fractions.h"
using namespace std;

	int gcd(int a, int b);
	int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
	}
int main()
{
	//objects defined
	//Fractions Frac1;
    //Fractions Frac2(1,2);
	Fractions add;
	Fractions subtract;
	Fractions multiply;
	Fractions divide;
	int n;
	int d;
	
	cout<<"Please enter a numerator and denominator for the first fraction"<<endl;
		cin>>n>>d;
		 Fractions Frac1(n,d);
		 cout<<"Please enter a numerator and denominator for the second fraction"<<endl;
		cin>>n>>d;
		 Fractions Frac2(n,d);

	add = Frac1+Frac2;
	subtract = Frac1-Frac2;
	multiply = Frac1*Frac2;
	divide = Frac1/Frac2;

	cout<<"Addition"<<endl;
	cout<<(add.num/gcd(add.num,add.denom))<<"/"<<(add.denom/gcd(add.num,add.denom))<<endl;
	cout<<"Subtraction"<<endl;
	cout<<(subtract.num/gcd(subtract.num,subtract.denom))<<"/"<<(subtract.denom/gcd(subtract.num,subtract.denom))<<endl;
	cout<<"Multiplication"<<endl;
	cout<<(multiply.num/gcd(multiply.num,multiply.denom))<<"/"<<(multiply.denom/gcd(multiply.num,multiply.denom))<<endl;
	cout<<"Division"<<endl;
	cout<<(divide.num/gcd(divide.num,divide.denom))<<"/"<<(divide.denom/gcd(divide.num,divide.denom))<<endl;


	

	system("pause");
return 0;
}
