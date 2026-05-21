#include<iostream>
using namespace std;

void func(int mat[ ][4],int n,int m){

    cout<<"Oth row ptr"<<mat<<endl;
    cout<<"1st row ptr"<<mat+1<<endl;    //row pointer
    cout<<"2nd row ptr"<<mat+2<<endl;    //row pointer

    cout<<"Oth row value"<<*mat<<endl;      // D refrence *mat
    cout<<"1st row value"<<*(mat+1)<<endl;    //row value
    cout<<"2nd row value"<<*(mat+2)<<endl;    //row value


    // find 11 key
    cout<<*(*(mat+2)+2)<<endl;
}

void func2(int (*mat)[4],int n,int m){      // void it is equal

}

int main(){
    int mat[4][4]={{1,2,3,4},{5,6,7,8,},{9,10,11,12}};

    func(mat,4,4);


    return 0;

}
