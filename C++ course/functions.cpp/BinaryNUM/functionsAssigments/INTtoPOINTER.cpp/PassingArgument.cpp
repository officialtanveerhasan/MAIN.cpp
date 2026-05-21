#include <iostream>
using namespace std;

// void changeA(int a){
// 	a =20;
// 	cout<<a<<"\n";
// } 

//pass by reference using pointer 
void changeA(int *ptr){
	*ptr=20;
	cout<<*ptr<<endl;
}


//pass by reference using reference variables
void changeA(int &param/*&a*/){
	param=20;
	cout<<param<<endl;
}


int main(){
	int a=10;
	changeA(a);
	cout<<a<<"\n";
	// int &b=a;
	// b=25;
	// cout<<b<<endl;
	// cout<<a<<endl;
	// // changeA(&a);

	// cout<<a<<endl;

	return 0;
}

