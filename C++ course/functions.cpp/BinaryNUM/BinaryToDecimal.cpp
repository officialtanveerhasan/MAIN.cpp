#include <iostream>
using namespace std;

void binToDec(int binNum){                   //decimal to binary,binary to decimal
	int n=binNum;
	int decNum=0;
	int pow=1; //2^0 2^1 2^2..

	while(n>0){
		int LastDig=n%10;
		decNum += LastDig*pow;
		pow=pow*2;
		n=n/10;
	}
	cout<<"decimal of "<<binNum<<" = "<<decNum<<endl;
}

void decToBin(int decNum){
	int n=decNum;
	int pow=1; //10^0 10^1 10^3
	int binNum=0;
	while(n>0){
		int rem=n%2;
		binNum +=rem*pow;
		n=n/2;
		pow=pow*10;
	}
	cout<<"binary of "<<decNum<<" = "<<binNum<<endl;
}

int main(){
	binToDec(111);
	decToBin(7);
	return 0;
}


 
