/* inversion : a[i] and a[j] form an inversion if a[i]>a[j] and i<j; */
#include<bits/stdc++.h>

using namespace std;

long long merge(int a[], int l, int mid, int u){
	long long inv =0;
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
		if(b[i]<=c[j]){
			a[k]=b[i];
			i++;
			k++;
		}
	else{	a[k]=c[j];
			j++;
			k++;
			inv += n-i;
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
	return inv;
}

long long merge_sort(int a[], int l, int u){
	long long inv =0;
if(l<u){
	int mid=(l+u)/2;
	inv += merge_sort(a, l , mid);
	inv += merge_sort(a, mid+1,u);
	
	inv += merge(a,l,mid,u);
}
	return inv;
	}


int main () {
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>> a[i];
	}
	
	cout<<merge_sort(a,0,n-1);
	return 0;
}
