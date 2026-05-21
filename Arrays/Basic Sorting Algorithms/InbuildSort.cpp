#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
 }
    
int main(){
	int arr[8]={1,4,1,3,2,4,3,7};

	//Ascending Order
	// sort(arr,arr+8);  // sort(arr+2,arr+5)=1 4 1 2 3 4 3 7
	// print(arr,8);

	//Descending Order
	sort(arr,arr+8,greater<int>()); //
	print(arr,8);

	return 0;

 }