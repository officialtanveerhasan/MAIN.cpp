#include<iostream>
using namespace std;

int main(){
	int a=5;
	int*ptr=&a;

	cout<<ptr<<endl; //1st
	ptr=ptr+3;                //1st and 2nd is equal
	cout<<(ptr-3)<<endl; //2nd
	cout<<(ptr+3)<<endl;

	return 0;
}