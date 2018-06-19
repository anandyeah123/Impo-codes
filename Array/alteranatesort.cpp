#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void alternatesort(int a[],int n){
	sort(a,a+n);
	
	int i=0,j=n-1;
	while(i<j){
		cout<<a[j--]<<" ";
		cout<<a[i++]<<" ";
		
	}
	if(n%2!=0)
	cout<<a[i];
	
}
int main(){
	int a[]={4,3,65,85,34,23,12,1,11};
	int n=sizeof(a)/sizeof(a[0]);
	alternatesort(a,n);
	
	
}
