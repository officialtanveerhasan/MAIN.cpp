#include <iostream>
using namespace std;

int main(){
    // char word[30];
    // cin>>word;
    // cout<<"your word was: "<<word<<endl;  //ignore whitespace
    // cout<<"length : "<<strlen(word)<<endl;


    char sentence[30];
    cin.getline(sentence,30,'*');   //not ignore whitespace 
    cout<<"your word was: "<<sentence[0]<<endl;  // [] only first index output
    cout<<"length : "<<strlen(sentence)<<endl;

    return 0;

}

