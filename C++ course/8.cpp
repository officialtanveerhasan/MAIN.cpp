#include <iostream>
using namespace std;

int main(){
    // Typcasting 1 implicit type 
	
	// cout<<(10/3)<<endl;   //3
	// cout<<(10/3.0)<<endl; //3.3333

	//cout<<('A'+1)< <endl;
	// cout<<('A'-0)<<endl;
	// cout<<('a'-0)<<endl;

	// 2 explisit type
	cout<<(int)('A')<<endl;
	float PI=3.14;
	cout<<(int)(PI)<<endl;
	cout<<(float)(10/3)<<endl;
	cout<<(char)('A'+1)<<endl;  // B



	return 0;

}