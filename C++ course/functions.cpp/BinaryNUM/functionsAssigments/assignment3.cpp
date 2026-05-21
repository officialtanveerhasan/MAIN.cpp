#include <iostream>
using namespace std;

int abSquare(int a,int b){
	return a*a + b*b + 2*a*b;

}

int main(){
	int a ,b;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	cout<<"sum of square:"<<abSquare(a,b)<<endl;

	return 0;


}