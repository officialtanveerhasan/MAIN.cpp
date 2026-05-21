#include <iostream>
using namespace std;

int main(){
	int a=10;
	int*ptr=&a;

	double duo=99.99;
	double*ptr3=&duo;

	float pi=3.14;
	float*ptr2=&pi;
	cout<<sizeof(ptr3)<<endl;
	cout<<sizeof(ptr)<<endl;
	cout<<sizeof(ptr2)<<endl;
	return 0;
	
}