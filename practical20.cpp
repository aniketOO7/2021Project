#include <iostream>
using namespace std;
int main(){
	int a;
    cout<<"Conversion of temperature from Celsius to Fahrenheit"<<"\n";
    cout<<"Enter the temperature";
    cin>>a;
    cout<<"Celsius";
    float b;
    b=(a*9/5)+32;
    cout<<"The temperature is "<<b<<" Fahrenheit";
	return 0;
}
