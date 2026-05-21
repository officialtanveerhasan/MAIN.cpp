#include<iostream>
using namespace std;

// increment

int main(){
	// int a=10;              // int
	// int*aptr=&a;
	// cout<<aptr<<endl;

	// aptr++;   //1 int ++
	// cout<<aptr<<endl;

	// char ch='a';             //char
	// char*ptr=&ch;

	// cout<<ptr<<endl;
	// ptr++;   //1 char ++
	// cout<<ptr<<endl;

//deceremrt 

    int a=5;
	int*ptr=&a;

	cout<<ptr<<endl;   //1st
	ptr++;
	cout<<ptr<<endl;   
	ptr--; 
	cout<<ptr<<endl;   //3rd

//1st and 3rd is equal
	return 0;

}
