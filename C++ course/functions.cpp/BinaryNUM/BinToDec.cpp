#include <iostream>
using namespace std;

void BinToDec(int binNum){
	int n=binNum;
	int decNum=0;
	int pow=1;

	while( n>0){
		int Lastdig=n%10;
		decNum+=Lastdig*pow;
		pow=pow*2;
		n=n/10;
	}
	cout<<decNum<<endl;

}
int main(){
	BinToDec(111111);
	BinToDec(10110);
	BinToDec(10011);
	BinToDec(110010);
	
	return 0;
}
