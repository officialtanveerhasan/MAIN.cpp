#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a 3 digit number:";
	cin>>n;

	int num=n; // creating a copy
	int dig1=num %10;
	num/=10;
	int dig2=num%10;
	num/=10;
	int dig3=num%10;
	num/=10;
	int cubesum=dig1*dig1*dig1+dig2*dig2*dig2+dig3*dig3*dig3;

	if(cubesum==n){
		cout<<"Is a Armstrong Number"<<endl;
	}
	else{
		cout<<"Is not Armstrong number"<<endl;
	}

	return 0;


}