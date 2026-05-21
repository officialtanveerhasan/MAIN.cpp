#include<iostream>
using namespace std;

void maxProfit(int *pricres,int n){
	int bestBuy[100000];  //10^5
	bestBuy[0]=INT8_MAX;
	
	for(int i=1; i<n; i++){
		bestBuy[i]=min(bestBuy[i-1],prices [i-1]);
		cout<<bestBuy[i]<<",";

	}

	cout<<endl;


}

int main(){
	int prices[6]={7,1,5,3,6,4};
	int n=sizeof(prices)/sizeof(int);

	maxProfit(prices,n);

	return 0;
}