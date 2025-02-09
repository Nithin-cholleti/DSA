/*
Time Complexity : O(n^2)
    The nested for loop runs n(n-1)/2 times and 
    comparing the absolute difference of each pair takes O(1) time.
    Thus, the total time complexity is O(n^2).
Space Complexity : O(1)
    For each test case, we are using a constant amount of space.
*/
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int res = 0;
        for(int i = 0 ; i< n ; i++){
            for(int j = i +1 ; j< n; j++){
                if(abs(nums[i] - nums[j]) == k){
                    res++;
                }
            }
        }
        return res;
    }
};