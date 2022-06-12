class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> visited;
        for(int i=0;i<nums.size();i++){
            int rem = target - nums[i];
            if(visited[rem]){
                ans.push_back(i);
                ans.push_back(visited[rem]-1);
            }
            visited[nums[i]] = i+1;
        }
        return ans;
    }
};