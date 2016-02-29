#include<iostream>

using namespace std;

class Fract
{

public:
	Fract(){
	}
	int top;
	int bottom;


void getNumDenom(int n1,int d1,int n2,int d2)
{

}


void setNumDenom(int n1,int d1,int n2,int d2)
{
if(d1==0 || d2==0)
{
d1=1;
d2=1;
}

}



int* add(int n1,int d1,int n2,int d2)
{
int arr[2];
arr[0] = n1*d2+n2*d1;
 
arr[1] = d1*d2;


return arr;
}

int* subtract(int n1,int d1,int n2,int d2)
{
int arr[2];
arr[0] = n1*d2-n2*d1;
arr[1] = d1*d2;
return arr;
}

int* multiply(int n1,int d1,int n2,int d2)
{
int arr[2];
arr[0] = n1*n2;
arr[1] = d1*d2;
return arr;
}

int* divide(int n1,int d1,int n2,int d2)
{
int arr[2];
arr[0] = n1*d2;
arr[1] = d1*n2;
return arr;
}
};



 int main()
{
	int n1; //first numerator 
int n2;//2nd numerator
int d1;//1st denominator
int d2;//2nd denominator
Fract obj;
cout<<"please enter numerator of first fraction"<<endl;
cin>>n1;
cout<<"please enter denominator of first fraction"<<endl;
cin>>d1;
cout<<"please enter numerator of 2nd fraction"<<endl;
cin>>n2;
cout<<"please enter denominator of 2nd fraction"<<endl;
cin>>d2;


//for addition
obj.getNumDenom(n1,d1,n2,d2);
obj.setNumDenom(n1,d1,n2,d2);
int * p;
p=obj.add(n1,d1,n2,d2); 

int n = *p;
int m = *(p+1);


if(n<m)
{
cout<<"The addition of "<<n1<<"/"<<d1<<"+"<<n2<<"/"<<d2<<" is equal to "<<n<<"/"<<m<<endl;
}


else
{
if(n%m==0)
{
cout<<"The addition of "<<n1<<"/"<<d1<<"+"<<n2<<"/"<<d2<<" is equal to "<<n<<"/"<<m<<endl;
}

else
{
int quot;
int remainder;

quot = n/m;
remainder = n%m;
cout<<"The addition of "<<n1<<"/"<<d1<<"+"<<n2<<"/"<<d2<<" is equal to "<<remainder<<" "<<remainder<<"/"<<m<<endl;
}
}
//addition ends


//subtraction
int* p2;
p2=obj.subtract(n1,d1,n2,d2); 

int pointer = *p2;
int pointer2 = *(p2+1);
if(pointer<pointer2)
{
cout<<"Subtraction "<<n1<<"/"<<d1<<"-"<<n2<<"/"<<d2<<" is equal to "<<pointer<<"/"<<pointer2<<endl;
}


else
{
if(pointer%pointer2==0)
{
cout<<"Subtraction "<<n1<<"/"<<d1<<"-"<<n2<<"/"<<d2<<" is equal to "<<pointer<<"/"<<pointer2<<endl;
}

else
{
int quot;
int remainder;

quot = pointer/pointer2;
remainder = pointer%pointer2;
cout<<"Subtraction "<<n1<<"/"<<d1<<"+"<<n2<<"/"<<d2<<" is equal to "<<remainder<<" "<<remainder<<"/"<<m<<endl;
}
}//subtraction ends

//multiply
int* p3;
p3=obj.multiply(n1,d1,n2,d2); 

int pointer3 = *p3;
int pointer4 = *(p3+1);
if(pointer3<pointer4)
{
cout<<"multiplication "<<n1<<"/"<<d1<<"*"<<n2<<"/"<<d2<<" is equal to "<<pointer3<<"/"<<pointer4<<endl;
}


else
{
if(pointer3%pointer4==0)
{
cout<<"multiplication"<<n1<<"/"<<d1<<"+"<<n2<<"/"<<d2<<" is equal to "<<pointer3<<"/"<<pointer4<<endl;
}

else
{
int quot;
int remainder;

quot = pointer3/pointer4;
remainder = pointer3%pointer4;
cout<<"multiplication "<<n1<<"/"<<d1<<"+"<<n2<<"/"<<d2<<" is equal to "<<remainder<<" "<<remainder<<"/"<<m<<endl;
}
}//multiply ends

//divide
int* p4;
p4=obj.divide(n1,d1,n2,d2); 

int pointer5 = *p4;
int pointer6 = *(p4+1);
if(pointer5<pointer6)
{
cout<<"division "<<n1<<"/"<<d1<<"*"<<n2<<"/"<<d2<<" is equal to "<<pointer5<<"/"<<pointer6<<endl;
}


else
{
if(pointer5%pointer6==0)
{
cout<<"division"<<n1<<"/"<<d1<<"+"<<n2<<"/"<<d2<<" is equal to "<<pointer5<<"/"<<pointer6<<endl;
}

else
{
int quot;
int remainder;

quot = pointer5/pointer6;
remainder = pointer5%pointer6;
cout<<"division "<<n1<<"/"<<d1<<"+"<<n2<<"/"<<d2<<" is equal to "<<remainder<<" "<<remainder<<"/"<<m<<endl;
}
}
 
 
system("pause");

return 0;
}