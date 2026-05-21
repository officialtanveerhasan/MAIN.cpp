#include <iostream>
#include<cmath>       // use by root squar write method in 2nd method use
using namespace std;

int main( ){
	// int n;
	// cout<<"Enter number:";
	// cin>>n;
	// bool isprime=true;

	// for(int i=2;i<=n-1;i++){
	// 	if(n%i==0){  //i is a factor of n; n is non prime
	// 		isprime=false;
	// 	}
		

	// }
	// if(isprime==true){
	// 	cout<<"number is prime"<<endl;
	// }
	// else{
	// 	cout<<"number is not prime"<<endl;

	// }

//**********************************************2nd method ***//
    
	int n;
	cout<<"Enter number:";
	cin>>n;
	bool isprime=true;

	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){  //i is a factor of n; n is non prime
			isprime=false;
		}
		

	}
	if(isprime==true){
		cout<<"number is prime"<<endl;
	}
	else{
		cout<<"number is not prime"<<endl;

	}
    return 0;
}