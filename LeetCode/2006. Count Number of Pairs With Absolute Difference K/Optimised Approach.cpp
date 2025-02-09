/*
Time Complexity : O(n)
    We are iterating through the array once and for each element, 
    we are checking if the required pair exists in the map.
    Thus, the total time complexity is O(n).
Space Complexity : O(n)
    We are using a map to store the frequency of each element.
    The space complexity is O(n) as the map can contain at most n distinct elements.
*/

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int res = 0;
        unordered_map<int, int> mp;
        for(int x : nums){
            res += mp[x-k] + mp[x+k];
            mp[x]++;
        }
        return res;
    }
};