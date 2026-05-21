#include <iostream>
using namespace std;

char getNextChar(char ch){
	if(ch=='z'){
		return 'a';
	}
	else{
		return ch+1;
	}
}

int main(){
	char ch;
	cout<<"get next char:"<<getNextChar(ch)<<endl;
	cout<<"enter character:";
	cin>>ch;
	return 0;

					



	
	
	
	
	
	
}