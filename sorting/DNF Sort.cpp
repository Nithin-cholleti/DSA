#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
using namespace std;

void swap(int a[], int l, int m){
	int temp = a[l];
	a[l]= a[m];
	a[m]=temp;
}

void dnf_sort(int a[] , int n){
	int low=0,mid=0,high=n-1;
	while(mid<=high){
		if(a[mid]==1){
			mid++;
		}
		else if( a[mid]==0){
			swap(a,low,mid);
			low++;
			mid++;
		}
		else{
			swap(a, mid, high);
			high--;
		}
	}
}


int main (){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dnf_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<ends;
	}	
}
