#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c;
	float s,z,s1,s2,s3;
	cout<<"Calculating area of triangle by Heron's formula"<<"\n"<<"Heron's Formula=sqrt(s(s-a)(s-b)(s-c))"<<"\n";
	cout<<"Enter the value of sides of triangle :";
	cin>>a;
	cin>>b;
	cin>>c;
	s=(a+b+c)/2;//7.5
	s1=s-a;//2.5
	s2=s-b;//2.5
	s3=s-c;//2.5
	z=sqrt(s*s1*s2*s3);
	cout<<"Area of triangle is :"<<z;
	return 0;
}

