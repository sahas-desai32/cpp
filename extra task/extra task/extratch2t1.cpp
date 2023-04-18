#include<iostream>
using namespace std;

inline fact(){
	int f=1,n;
	while(n>=1)
	{
		f=f*n;
		n--;
	}
	return f;
}

main()
{
	int n,i,a[n];
	
	cout<<"enter size of array";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"enter elements of array";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<fact a[i]" ";
	}
}
