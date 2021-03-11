#include <iostream>
using namespace std;
int main (){
	int rad;
	float volsph;
	cout<<"To calculate volume of sphere "<<"\n";
	cout<<"Enter the value of rad"<<rad;
	cin>>rad;
	cout<<"volume of sphere is (4/3*3.14*rad*rad*rad)";
	volsph=(4*3.14*rad*rad*rad)/3;
	cout<<"Volume of sphere is :"<<volsph;
	return 0;
}
