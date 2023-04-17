#include<iostream>
using namespace std;

int main(){
	
	int n,i;
	cout<<"enter n";
	cin>>n;
	int num[n];
	
	for(i=0;i<n;i++){
		if(num[i] %2==0){
			cout<<num[i] << " ";
		}
	}
	
	
}
