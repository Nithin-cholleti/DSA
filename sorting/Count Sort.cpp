/* Logic: count the repetation and store in an array in respect the the index resembling the number repeated, now find the postion and keep according to it.  		*/
#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
using namespace std;

void count_sort(int a[], int n){
	int maxm = a[0];
	for(int i=0; i<n;i++){
	maxm = max(maxm, a[i]);
}
	int count[10] = {0};  //since we cant chage length we r taking a size of 10 as per constraints
	for(int i = 0; i<n; i++){
		count[a[i]]++;
	}	
	for(int i=1; i<=maxm;i++){
		count[i] += count[i-1];
	}
	int output[n];
	for(int i = n-1; i>=0;i--){
		output[count[a[i]]-1] = a[i];
		
	}
		for(int i=0;i<n;i++){
		a[i]= output[i];
	}
}

int main (){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	count_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<ends;
	}	
}
