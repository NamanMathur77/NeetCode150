class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefixsum;
        int prefix = 1;
        for(auto i:nums){
            prefixsum.push_back(prefix);
            prefix*=i;
        }
        int postfix =1;
        for(int i = nums.size()-1;i>=0;i--){
            prefixsum[i]*=postfix;
            postfix*=nums[i];
        }
        return prefixsum;
    }
};