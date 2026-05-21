#include <iostream>
using namespace std;

void DecToBin(int DecNum){;
     int n=DecNum;
     int pow=1;
     int BinNum=0;

     while(n>0){
		int rem=n%2;
		BinNum+=rem*pow;
		n=n/2;
		pow=pow*10;

    }
	cout<<"Binsry of "<<DecNum<<" = "<<BinNum<<endl;
}

int main(){
	DecToBin(25);
    DecToBin(49);
	DecToBin(31);
	DecToBin(88);

}	