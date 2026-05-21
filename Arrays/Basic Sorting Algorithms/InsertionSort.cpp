#include<iostream>
using namespace std;

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
 }
 // Insertion Sort tc=
void insertionSort(int arr[],int n){

	for(int i=1;i<n;i++){
		int curr=arr[i];
		int prew=i-1;
		while(prew>=0 && arr[prew]>curr){
			swap(arr[prew],arr[prew+1]);
			prew--;
		}
		arr[prew+1]=curr;
	}
	print (arr,n);
}

int main(){
	int arr[5]={5,4,1,3,2};
	insertionSort(arr,5);
	return 0;
}