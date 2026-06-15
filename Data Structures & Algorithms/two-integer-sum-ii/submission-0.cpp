class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>mp;
        int n=numbers.size();
        for(int i=0;i<n;i++){
            int remaining=target-numbers[i];
            if(mp.find(remaining)!=mp.end()){
                return {mp[remaining] + 1, i + 1};
            }
            mp[numbers[i]]=i;

        }
        return {-1,-1};
        
    }
};