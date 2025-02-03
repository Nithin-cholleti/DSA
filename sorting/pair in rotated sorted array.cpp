#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,flag = 0;
    cin>>n>>k;
    int a[n];
    for(int i = 0 ; i<n ;i++){
        cin>>a[i];
    }
    int i =0;
   for(i;i<n-1;i++){
       if(a[i]>a[i+1]) break;
   }

   int l = i+1, r = i;
   while(l != r){
       if(a[l]+a[r] == k){

           flag = 1;
           break;
       }
       else if( (a[l] + a[r]) > k){
           r = (n+r-1)%n;
       }
       else{
           l = (l+1)%n;
       }
   }
  if(flag == 1){
      cout<<"True";
  }
  else{
      cout<<"False";
  }
    return 0;
}
