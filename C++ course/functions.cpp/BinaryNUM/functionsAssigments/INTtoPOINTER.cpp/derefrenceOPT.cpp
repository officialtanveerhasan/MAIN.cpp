#include <iostream>
using namespace std;

int main (){
	int a=10;
	int*ptr=&a;

	cout<<ptr/*&a*/<<endl; 
	cout<<*ptr/*(&a)*/<<endl;

	*ptr=20;
	cout<<a<<endl; //derefrence

     return 0;

}