#include <iostream>
using namespace std;

int main()
{

	// output Arrays

	/*
		int arr[5]={7,5,2,1,3};
		int len=sizeof(arr)/sizeof(int);
		for(int idx=0; idx<=len-1; idx++) {   //sort idx=i and len=n
			cout<<arr[idx]<<" ";  //idx=0,1,2,3,4,,,
		}
		cout<<endl;
					   */
	// input Arrays
	int n;
	cout << "Enter length of Array:";
	cin >> n;
	int arr[n]; // put n number
	// int n=sizeof(arr)/sizeof(int);

	for (int i = 0; i < n; i++)
	{
		cout << "Enter value :";
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ",";
	}
	return 0;
	cout << endl;
}
