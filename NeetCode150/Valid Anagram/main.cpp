https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        map<char, int> string1;
        for(auto i: s){
            string1[i]+=1;
        }
        for(auto i: t){
            string1[i]-=1;
        }
        for(auto i: string1){
            if(i.second > 0){
                return false;
            }
        }
        return true;
    }
};