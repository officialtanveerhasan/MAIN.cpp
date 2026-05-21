#include <iostream>
using namespace std;

int main (){

	// Arithmematic operators
	// int a=5;
	// int b=2;
	// cout<<"+ "<<(a+b)<<endl;
    // cout<<"- "<<(a-b)<<endl;
    // cout<<"* "<<(a*b)<<endl;
	// cout<<"/ "<<(a/b)<<endl;
    // cout<<"% "<<(a%b)<<endl;   //modulo (remainder)

	// // Unary operaters
	// int a=3;
	// // a=a+1; // short form a++ increament 
	// // cout<<a;
	// a++;
	// cout<<"increament="<<a<<endl;

	// a--;  // decreament a--
	// cout<<"decremnent="<<a<<endl;

	// int a=3;
	// int b=++a; //4
	// cout<<"a="<<a<<endl;  //4
	// cout<<"b="<<b<<endl;  //4
	// int b=a++;
	// cout<<"a="<<a<<endl;
	// cout<<"b="<<b<<endl;

	// assignment operators
	// int a=10;
	// a +=5;
	// cout<<"a ="<<a<<endl;
	// a -=5;
	// cout<<"a ="<<a<<endl;
	// a *=5;
	// cout<<"a ="<<a<<endl;
	// a /=5;
	// cout<<"a ="<<a<<endl;

	// Relational operaters
	// int a=3;
	// int b=5;
	
	// cout<<(a>b)<<endl; // false -> 0
	// cout<<(a<b)<<endl; // true -> 1

	// int a=3;
	// int b=3;
	// cout<<(a>=b)<<endl; // true -> 1
	// cout<<(a<=b)<<endl; // true -> 1

	// int a=3;
	// int b=3;
	// cout<<(a==b)<<endl; // true -> 1
	// cout<<(a!=b)<<endl; // false-> 0

	// logical operator *** AND operator
	// cout<<((3<5) && (10>5))<<endl;  // true -> 1
	// cout<<((3>5)&&(10==5))<<endl;  // false -> 0
	// cout<<((3==5)&&(10==5))<<endl;  // false -> 0

	// OR operator 
	// cout<<((3<5)||(10>5))<<endl; // true -> 1
	// cout<<((3>5)||(10>5))<<endl;  //false true -> true -> 1
	// cout<<((3==5)||(10==5))<<endl; // false false -> 0

	// NOT operator 
	cout<<(!(3>5))<<endl; // false! -> true-> 1
	cout<<(!(5>3))<<endl; // true! -> false -> 0
	return 0;
}