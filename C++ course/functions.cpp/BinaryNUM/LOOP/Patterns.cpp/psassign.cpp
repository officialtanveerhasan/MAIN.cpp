#include <iostream>
using namespace std;

int main(){

// pattern 1 Qs
	// bool val=true;
	// int n=5;

	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<=i;j++){
	// 		cout<<val<<" ";
	// 		val=!val;
	// 	}
	// 	cout<<"\n";

	// }

//
// 1 
// 0 1
// 0 1 0
// 1 0 1 0
// 1 0 1 0 1


//pattern 2QS

// int n=5;
// for(int i=0;i<n;i++){
// 	    //spaces
// 	for(int j=0;j<=n-i-1;j++){
// 		cout<<" ";
// 	}
// 	// stras
// 	for(int j=0;j<n;j++){
// 		cout<<"*";
// 	}
// 	cout<<endl;

// }


// 	    *****
//     *****
//    *****
//   *****
//  *****

//pattern 3QS
    int n=5;
	for(int i=1;i<=n;i++){
		//space
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		//num backward
		for(int j=i;j>=1;j--){
			cout<<j;
		}
		//num forward 
		for(int j=2;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
//     1
//    212
//   32123
//  4321234
// 543212345
    return 0;
}
