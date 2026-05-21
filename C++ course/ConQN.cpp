 #include<iostream>
 using namespace std;

 int main( ){

	//******Question******// if else,else if etc,,,

	// int a=5,b=10;

	// if(a>b){
	// 	cout<<a<<endl;
	// }

	// else{
	// 	cout<<b<<endl;
	// }
//*******************************************//
	// int a,b;
	// cout<<"enter a:";
	// cin>>a;
	// cout<<"enter b:";
	// cin>>b;

	// if(a>=b){
	// 	cout<<"a is larger:"<<a<<endl;
	// }

	// else {
	// 	cout<<"b is larger:"<<b<<endl;
	// }

//********************************************//
	// int num;
	// cout<<"Enter number:";
	// cin>>num;

	// if(num % 2==0){
	// 	cout<<"Number is Even:"<<endl;
	// }

	// else{
	// 	cout<<"Number is Odd:"<<endl;
	// }

//*******************************************//
      
    // int income;
	// float tax;
	// cout<<"Enter income(in Lakhs):";
	// cin>>income;

	// if(income<5){ // 0%
	// 	tax=0;
	// }

	// else if(income<=10){
	// 	tax=0.2 * income; // 20% ==0.2
	// }

	// else{
	// 	tax=0.3 * income; // 30%==0.3
	// }  

	// cout<<"Tax ="<<(tax*100000)<<endl;

//***************************************//
    int a,b,c;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	cout<<"Enter c:";
	cin>>c;

	if(a>=b && a>=c){
		cout<<"Largest is a:"<<a<<endl;
	}
	
	else if(b>=c){
		cout<<"Largest is b:"<<b<<endl;
	}

	else {
		cout<<"Largest is c:"<<c<<endl;
	}

	return 0;
 }
