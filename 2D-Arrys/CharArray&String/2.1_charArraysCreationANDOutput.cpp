#include <iostream>
using namespace std;

int main(){

// method 1
    // char work[]="code";
    // cout<<work<<endl;

//method 2
    // char work[5]="code";
    // cout<<work<<endl;

// methos 3
    // char work[]={'c','o','d','e','\0'};   
    // cout<<work<<endl; 

//method 4
    char work[50]={'c','o','d','e','\0'};    
    cout<<strlen(work)<<endl;

    return 0;
}
