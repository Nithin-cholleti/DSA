// https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int increasingLength = 1;
        int decreasingLength = 1;
        int res = 1;
        int n = nums.size();
        for(int i = 1 ; i< n ; i++){
            if(nums[i] > nums[i-1]){
                increasingLength++;
                decreasingLength = 1;
            }
            else if(nums[i] < nums[i-1]){
                decreasingLength++;
                increasingLength = 1;
            }
            else{
                increasingLength = 1;
                decreasingLength = 1;
            }
            res = max(res, max(decreasingLength,increasingLength));
        }
        return res;
    }
};
