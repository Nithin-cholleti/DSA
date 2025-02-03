#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
using namespace std;

void swap(int a[], int l, int m){
	int temp = a[l];
	a[l]= a[m];
	a[m]=temp;
}

void wave_sort(int a[], int n){
	int i=1;
	while(i<n){
		if(a[i]>a[i-1]){
			swap(a,i,i-1);
		}
		if(a[i]>a[i+1] && i<=n-2){
			swap(a,i,i+1);
		}
		
		i+=2;
	}
}

int main (){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	wave_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<ends;
	}	
}
