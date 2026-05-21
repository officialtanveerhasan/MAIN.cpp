#include<iostream>
using namespace std;

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
 }
// selection sort tc=o(n^2)
 void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int minIdx=i;
		// loop for find min
		for(int j=i+1;j<n;j++){
			if (arr[j]<arr[minIdx]){  // < ascending > desending
			    minIdx=j;
			}
		}
		swap(arr[i],arr[minIdx]);
	}
	print(arr,n);
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

void countSort(int arr[],int n){
	int freq[100000]; //range
	int minVal=INT16_MAX, maxVal=INT16_MIN;
	for(int i=0; i<n;i++){
		minVal=min(minVal,arr[i]);
		maxVal=max(minVal,arr[i]);
	}
	// 1st step - o(n)
	for(int i=0;i<n;i++){
		freq[arr[i]]++; 
	}
	//2nd step - O(range)=max-min
	for(int i=minVal,j=0;i<=maxVal;i++){
		while(freq[i]>0){
			arr[j++]=i;
			freq[i]--;
		}
	}

	print(arr,n);

}

int main(){
	// int arr[5]={5,4,1,3,2};
	// selectionSort(arr,5);
	// insertionSort(arr,5);
	int arr[8]={1,4,1,3,2,4,3,7};
	countSort(arr,8); 
	return 0;
}