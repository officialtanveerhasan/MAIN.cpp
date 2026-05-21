#include <iostream>
using namespace std;

int main (){

	// for(int i=1;i<=4;i++){          // QS1
	// 	cout<<"*  *  *  *"<<endl;
	// }


	// ****************************************** //

	// int n=12;                         //QS2

	// for(int i=n;i>=1;i--){   //i>0
	// 	cout<<i<<" ";

	// }
	// cout<<endl;

	//**********************************************//

	// int n=10829;
	// int digSum=0;

	// while(n>0){
	// 	int lastDig=n%10;
	//     digSum+=lastDig;        //cout<<lastDig<<" ";
	// 	n=n/10;
	// } 
	// cout<<"sume="<<digSum<<endl;

//**************************************************//
    
    
    // int n=10829;
	// int digSum=0;

	// while(n>0){
	// 	int lastDig=n%10;
	// 	if(lastDig%2!=0){
    //         digSum+=lastDig;
	// 	}           
	// 	n=n/10;
	// } 
	// cout<<"sume="<<digSum<<endl;

//*************************************************//
    
	   
    int n=12345;
	int res=0;

	while(n>0){
	   int lastDig=n%10;
       res=res*10+lastDig;
	   n=n/10;
	} 
	cout<<"reverse="<<res<<endl;


	return 0;
}