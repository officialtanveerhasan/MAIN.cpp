 #include <iostream>
 using namespace std;
int main(){

	//*****************if else state.. //
	// int age=17;

	// if(age>=18){
	// 	cout<<"can vote"<<endl;
	// }
	// else{
	// 	cout<<"can't vote"<<endl;
	// }

//*****************************************//

	// int age;
	// cout<<"Enter your age:";
	// cin>>age;

	// if(age>=18){
	// 	cout<<"can vote"<<endl;
	// }
	// if(age>=45){
	// 	cout<<"Contest for elections"<<endl; // if multi time write
	// }

	// else{
	// 	cout<<"can't vote"<<endl; // else write one time  
	// }

	// float marks;
	// cout<<"enter marks:"<<endl;
	// cin>>marks;

	// if(marks>=60){
	// 	cout<<"PASS"<<endl;
	// }

	// else{
	// 	cout<<"FAIL"<<endl;
	// }


	//************else if state.... //
	// int marks=80;
	// if(marks>=90){
	// 	cout<<"A"<<endl;
	// }

	// else if(marks>=80){
	// 	cout<<"B"<<endl;
	// }

	// else{
	// 	cout<<"c"<<endl;
	// }

	//*************Ternary operator*//

    // bool isAdult;
	// int age;
	// cout<<"Enter age:";
	// cin>>age;

	// if(age>=18){
	// 	cout<<"True:"<<true;    //1
	// }

	// else{
	// 	cout<<"True:"<<false;   //0
	// }

	// isAdult =age>=18 ? true:false;
	// cout<<isAdult;


	// largest of 2 numbers
	// int a=10;
	// int b=5;
	// int largest=a>=b?a:b;
	// cout<<"Largest is:"<<largest;



//************odd or even *****//
    // int num=13;

    // bool isEven=num % 2==0 ?true:false;

	//***************************switch state.... *//

	int day;
	cout<<"Enter day:";
	cin>>day;

	switch(day){
		case 1:cout<<"Monday"<<endl;
		            break;
		case 2:cout<<"Tuesday"<<endl;
		            break;
		case 3:cout<<"Wednesday"<<endl;
                    break;
        case 4:cout<<"Thursday"<<endl;
		            break;
	    case 5:cout<<"Friday"<<endl;
		            break;
	    case 6:cout<<"Saturday"<<endl;
		            break;
		case 7:cout<<"Sunday"<<endl;
		            break;
	    default :cout<<"Invalid"<<endl; 
	}              

	return 0;
}
