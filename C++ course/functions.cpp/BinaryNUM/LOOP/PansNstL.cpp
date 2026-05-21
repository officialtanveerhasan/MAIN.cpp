#include <iostream>
using namespace std;

int main( ){
	// //outer loop   //pattern
	// int n;
	// cout<<"Enter number:";
	// cin>>n;
	// for(int i=1;i<=n;i++){
	// 	//inner loop
	// 	for(int j=1;j<=n;j++){
	// 		//work
	// 		cout<<i<<" ";
	// 	}
	// 	cout<<endl;  


	// }

//****************************dry run */	

    //outer loop   //pattern
	int n=4;
	int i;
	for(i=1;i<=n;i++){
		//inner loop
		int val=i;
		for(int j=1;j<=n;j++){
			//work
			cout<<val<<" ";
		}
		cout<<endl; 

	}
	
	cout<<i<<endl;  // i-> 5 print 


	return 0;
}