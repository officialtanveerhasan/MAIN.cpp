#include<iostream>
using namespace std;

// void multipleBy2(int &a,int &b,int &c){        //assignment1
// 	a*=2;
// 	b*=2;
// 	c*=2;
// }

// int main(){
// 	int x=1,y=2,z=3;
// 	multipleBy2(x,y,z);
// 	cout<<x<<y<<z<<endl;
// }

int main(){
	int a=32;
	int *ptr=&a;
	char ch='A';
	char &cho=ch;
	cho+=a;
	*ptr+=ch;
	cout<<a<<" = "<<ch<<endl;
}