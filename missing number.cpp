#include<iostream>
using namespace std;
int main(){
	int i,n,arr[n],sum=0;
	cout<<"Enter the size :"<<endl;
	cin>>n;
	cout<<"Enter the Elelments:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	int total=(n*(n+1)/2);
	int missing=total-sum;
	cout<<"Missing number is "<<missing<<endl;
	
}
