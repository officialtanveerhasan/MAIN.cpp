#include <iostream>
using namespace std;

int main(){
	int x=10;
	int *ptr=&x;

	int y=25;
	ptr=&y;
	cout<<*ptr<<endl;  //25   

	//but not posible in  array pointer
	int arr[5];
	cout<<arr<<endl;

	int y=25;
	//arr=&y;   // gives erro
	return 0;

}
