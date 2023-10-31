/*
problem solution:- https://leetcode.com/problems/find-the-original-array-of-prefix-xor/description/?envType=daily-question&envId=2023-10-31
*/

class Solution {
 public:
  vector<int> findArray(vector<int>& pref) {
    vector<int> ans(pref.size());

    ans[0] = pref[0];
    for (int i = 1; i < ans.size(); ++i)
      ans[i] = pref[i] ^ pref[i - 1];

    return ans;
  }
};
