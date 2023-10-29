/*
Problem Link: https://leetcode.com/problems/largest-rectangle-in-histogram/
*/

class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        stack<int> s;
        int ans=0,n=a.size();
        for(int i=0;i<n;++i){
            //ans=max(ans,a[i]);
            while(!s.empty()&&a[s.top()]>=a[i]){

                if(s.size()>1) {
                    int last=s.top();s.pop();
                    ans=max(ans,(i-s.top()-1)*a[last]);
                }
                else {
                ans=max(ans,i*a[s.top()]);
                s.pop();
                }
            }
            s.push(i);
        }
        while(!s.empty()){
                if(s.size()>1) {

                    int last=s.top();s.pop();
                    ans=max(ans,(n-s.top()-1)*a[last]);}
                else {
                    ans=max(ans,n*a[s.top()]);
                s.pop();
                     }
        }
        return ans;
    }
};