#include<iostream>
using namespace std;

void function (int arr[]){
	arr[0]=1000;
}

void function2(int*ptr){
	ptr[0]=1000;
}

int main(){
	int a=5;
	int *ptr=&a;
	cout<<ptr<<endl;  //0x....


	int arr[]={1, 2, 3, 4, 5};
	int n=sizeof(arr)/sizeof(int); 
	
	//cout<<*arr<<endl;        //arr[0]
    // cout<<*(arr+1)<<endl;   //arr[1]
	// cout<<*(arr+3)<<endl;   //arr[2]

	function(arr); //passing array name is eq. to passing the pointer
	cout<<arr[0]<<endl;


    return 0;
}