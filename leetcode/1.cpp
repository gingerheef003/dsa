// https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            int comp = target - nums[i];
            if(mp.find(comp) != mp.end()) return {mp[comp], i};
            mp[nums[i]] = i;
        }
        return {};
    }
};
