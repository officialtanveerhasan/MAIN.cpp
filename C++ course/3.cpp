#include <iostream>
using namespace std;

// Data types

int main (){
	int age=25;
	int marks=500;
	cout<<"size of int="<<sizeof(int)<<endl; // size of int=4bytes

	char grade='A';
	cout<<"size of char="<<sizeof(char)<<endl; // char=1 byte

	bool isadult=true;
	cout<<"size of bool="<<sizeof(bool)<<endl; // bool=1 byte

	float cgpa=8.9;
	cout<<"size of float="<<sizeof(float)<<endl; // float=4 bytes

	double price=99.99;
	cout<<"size of double="<<sizeof(double)<<endl;
	cout<<age<<" "<<marks<<" "<<isadult<<" "<<cgpa<<" "<<endl; // double=8 bytes
	



	return 0;

}