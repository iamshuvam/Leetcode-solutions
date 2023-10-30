/*
Problem Link : https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/
*/

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int g = numsDivide[0];
        for(auto &c:numsDivide) {g = __gcd(c,g); if(g==1) break;}
        
        // int ans = 1e9;
        //map<int,int> m;
        //for(auto &c:nums) m[c]++;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();++i) {
            if(g%nums[i]==0) return i;
        }
        // if(ans == 1e9) ans = -1;
        return -1;
    }
};