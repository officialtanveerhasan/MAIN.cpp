#include<iostream>
using namespace std;

int prod(int a,int b){
	int p=a*b;
	return a*b;
}

//even-> true;odd->false
bool iseven(int n){
	if (n%2==0)
	{
		return true;
	}
	else {
		return false;
	}
}
//factorial n
int factorial(int n){
	int fact=1;

	for(int i=1;i<=n;i++){
		fact=fact*i;

	}
	cout<<"factorial("<<n<<")="<<fact<<endl;
	return fact;

}

	

int main(){
	factorial(0);
	factorial(1);
	factorial(2);
	factorial(3);
	factorial(5);
	factorial(6);


	return 0;
}
