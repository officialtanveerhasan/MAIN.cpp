#include<iostream>
using namespace std;

//comparison(==,<,<=,>,>=)

int main(){
	int arr[20]={1,2,3,4,5,6};
	int*ptr1=arr;
	int*ptr2=ptr1+3;

	cout<<(ptr2>ptr1)<<endl;  //yes:yrue
	cout<<(ptr2<ptr1)<<endl;  //no:false
	cout<<(ptr2==ptr1)<<endl; //false generally use comparison(==)
    cout<<(ptr1==arr)<<endl; // yes:yes
    return 0;
}