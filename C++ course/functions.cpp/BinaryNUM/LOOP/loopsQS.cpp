#include <iostream>
using namespace std;

int main(){

//************ QS1:Factorial of a number n	
	// int n;
	// cout<<"Enter number:";
	// cin>>n;
	// int fact=1;

	// for(int i=1;i<=n;i++){
	// 	fact *i;
	// }
	// cout<<"factorial of "<<n<<" = "<<fact<<"\n";

//***************QS2: Multiplication Table of n
    // int n;
	// cout<<"Enter number:";
	// cin>>n;

	// for(int i=1;i<=10;i++){
	// 	cout<<(n*i)<<" ";
	// }
	// cout<<endl;


//***************//Qs3: Check for Armstrong Number
    // int n;
	// cout<<"Enter a number:";
	// cin>>n;
	// int num=n;
	// int cubesum=0;

	// while(num>0){
	// 	int lastdig=num%10;
	// 	cubesum+=lastdig*lastdig*lastdig;
	// 	num/=10;
	// }
	
	// if(n==cubesum){
	// 	cout<<"Armstrong number:"<<n;
	// }
	// else{
	// 	cout<<"Not an Armstrong number\n";
	// }

//****************Qs4: Print Primes from 2 to N

    // int n=15;

	// for(int i=2;i<=n;i++){
	// 	int curr=1;
	// 	bool isprime=true;
	// 	for(int j=2;j*j<=i;j++){
	// 		if(curr%j==0){
	// 			isprime=false;
	// 		}
	// 	}

	// 	if(isprime){
	// 		cout<<curr<<" ";
	// 	}
	// }

	// cout<<endl;

//*******************Qs5:Print N Fibonacci Numbers
    
	int n=10;
	int first =0,sec=1;

	cout<<first<<" "<<sec<<" ";

	for(int i=2;i<n;i++){
		int third=first+sec;
		cout<<third<<" ";
		first=sec;
		sec=third;
	}

	cout<<"\n";

	return 0;


}