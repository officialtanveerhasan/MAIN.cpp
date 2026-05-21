#include <iostream>
using namespace std;

int main (){

	// calculater build with the help of if else 
	float a,b;
	char ope;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	cout<<"Enter operator:";
	cin>>ope;

	//Calculater
	// if(ope=='+'){
	// 	cout<<"a+b="<<(a+b)<<endl;
	// }
	// else if(ope=='-'){
	// 	cout<<"a-b="<<(a-b)<<endl;
	// }
	// else if(ope=='*'){
	// 	cout<<"a*b="<<(a*b)<<endl;
	// }
	// else if(ope=='/'){
	// 	cout<<"a/b="<<endl<<(a/b)<<endl;
	// }
	// else {
	// 	cout<<"Invlid Operator";
	// }


	// calculater build with the help switch statement

	switch(ope){
		case '+':cout<<"a+b="<<(a+b)<<endl;
		break;
		case '-':cout<<"a-b="<<(a-b)<<endl;
		break;
		case '*':cout<<"a*b="<<(a*b)<<endl;
		break;
		case '/':cout<<"a/b="<<(a/b)<<endl;
		break;
		default :cout<<"Invalid 0perator"<<endl;



	}

	
}