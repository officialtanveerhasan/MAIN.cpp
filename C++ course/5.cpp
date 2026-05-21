#include <iostream>
using namespace std;

int main( ){
	int sci;
	int eng;
	int math;
	cout<<"Enter science marls:"<<endl;
	cin>>sci;

	cout<<"Enter english marls:"<<endl;
	cin>>eng;

	cout<<"Enter math marks:"<<endl;
	cin>>math;

	int avg=(sci+eng+math)/3;
	cout<<"avg marks="<<avg<<endl;
	return 0; 
}