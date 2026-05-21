#include <iostream>
using namespace std;

int largest(int a,int b,int c){
	if(a>=b && a>=c){
		return a;
	}
	else if (b>=c){
		return b;
	}
	else{
		return c;
	}
}
int main(){
    int a ,b ,c ;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	cout<<"enter c:";
	cin>>c;
	cout<<"largest value:"<<largest(a,b,c)<<endl;

	return 0;


}