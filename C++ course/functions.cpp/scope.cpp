#include <iostream>
using namespace std;

int num=25; // global scope variable

void sum(int a,int b){
	cout<<num<<endl;  // global scope
	int s=a+b;
	cout<<s<<endl;
}

int main(){
	sum(5,4);
	int s=10;
	cout<<num<<endl; //global scope
	return 0;
}