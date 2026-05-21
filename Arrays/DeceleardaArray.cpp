#include<iostream>
using namespace std;
int main(){

// Type 1 this is not enicializedd value in arrays 

 /* int marks[50]; //0 to 49 index
	cout<<marks[0]<<endl;   
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;  
	cout<<marks[10]<<endl;
	cout<<marks[50]<<endl; */

//output values guven by garbage value

// Type 2 
/*    int marks[50]={1,2,3}; //0 to 49
	cout<<marks[0]<<endl;  //1
	cout<<marks[1]<<endl;  //2
	cout<<marks[2]<<endl;  //3
	cout<<marks[3]<<endl;  //0 
                                */

//Type 3	
    int marks[]={1,2,3};  //0 to 2
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;  // Warning >> create random value
	return 0;

}
