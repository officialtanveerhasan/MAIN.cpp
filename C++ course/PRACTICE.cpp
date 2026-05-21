#include <iostream>
using namespace std;

// int main(){
// 	// char  name='azad';
// 	// cout<<"Enter your NAME:";

// 	// if(name='azad'){ 
// 	//     cin>>name;

// 	//     cout<<"your home is maneri bigha\nyour age=19"<<endl;

// 	// }

// 	// else {
// 	// 	cout<<"your not added name"<<endl;
// 	// }


		
// 	int count=1;
// 	while(count<3){
// 		cout<<count<<" ";
// 		count++;
// 	}
// 	cout<<endl;
// 	return 0;

// }
#include<istream>
using namespace std;

void multipleBy2(int &a,int &b,int &c){
	a*=2;
	b*=2;
	c*=2;
}

int main(){
	int x=1,y=2,z=3;
	multipleBy2(x,y,z);
	cout<<x<<y<<z<<endl;
	return 0;
}