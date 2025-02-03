// Problem Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool is_sorted(vector<int> a, int l, int r){
        for(int i = l+1 ; i <= r; i++){
            if(a[i] < a[i-1]){
                return false;
            }
        }
        return true;
    }
    bool check(vector<int>& nums) {
     int n = nums.size();
     if(n == 1 || n == 0 ){
        return true;
     }   
     int l = 0 ; 
     int r = n-1;
     int i = 1;
     if(nums[l] < nums[r]){
        return is_sorted(nums, l, r);
     }
     for(i ; i<n; i++){
        if(nums[i] < nums[i-1]){
            break;
        }
     }
     return is_sorted(nums, l, i-1) && is_sorted(nums, i, r);
    
    }
};