/*Merge sort is based on Divide and Conquer Algorithm */
#include<bits/stdc++.h>

using namespace std;

void merge(int a[], int l, int mid, int u){
	int n = mid-l+1;
	int m = u-mid;
	int b[n],c[m];
	for(int i=0 ;i<n;i++){
		b[i]= a[l+i];
	}
	for(int i=0 ;i<m;i++){
		c[i]= a[mid+1+i];
	}
	int i=0,j=0,k=l;
	while(i<n &&j<m){
		if(b[i]<c[j]){
			a[k]=b[i];
			i++;
			k++;
		}
	else{	a[k]=c[j];
			j++;
			k++;
		}
	}
	while(i<n){
		a[k]=b[i];
		i++;
		k++;
	}
	while(j<m){
		a[k]=c[j];
		j++;
		k++;
	}
}

void merge_sort(int a[], int l, int u){
if(l<u){
	int mid=(l+u)/2;
	merge_sort(a, l , mid);
	merge_sort(a, mid+1,u);
	
	merge(a,l,mid,u);
}
	}

int main(){
	int n;
	cin>>n;
	int a[n];
	
	for(int i =0; i<n;i++){
		cin>>a[i];
	}
	merge_sort(a,0,n-1);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
