#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int h, r;
	float vol;
	cout<<"To calculate the vo;ume of cylinder";
	cout<<"Enter the radius :";
	cin>>r;
	cout<<"Enter the height :";
	cin>>h;
	cout<<"Formula pi*r*r*h"<<"\n";
	vol=3.14*r*r*h;
	cout<<"Volume of cylinder is :"<<vol;
	
	return 0;
}
