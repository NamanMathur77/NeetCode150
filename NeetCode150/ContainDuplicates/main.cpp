//https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<long long int,long long int> m;
        for(auto i : nums){
            m[i]+=1;
            if(m[i]>1){
                return true;
            }
            }
        return false;
    }
};