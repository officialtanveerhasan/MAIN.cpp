#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter number:";
	cin>>num;

	if(num>0){
		cout<<"number is positive="<<num<<endl;
	}

	else if(num<0){
		cout<<"number is negative="<<num<<endl;
	}

	else{
		cout<<"number is zero="<<num<<endl;
	}
}
