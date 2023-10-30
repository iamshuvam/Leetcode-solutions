/**
Problem Link : https://leetcode.com/problems/regular-expression-matching/
*/

class Solution {
public:
    bool isMatch(string s, string p) {
        return ans(s,p,0,0);
    }
    bool ans(string &s,string &t,int i,int j){
        
        if(i>=s.size()){
            while(j+1<t.size()&&t[j]!='*'&&t[j+1]=='*') j+=2;
            if(j==t.size())
            return true;
            else return false;
        }
        
        
        if((j+1<t.size()&&t[j+1]=='*')) {
            if(t[j]=='.') return ans(s,t,i+1,j)|ans(s,t,i,j+2);
            else
            if(s[i]==t[j]) return ans(s,t,i+1,j)|ans(s,t,i,j+2);
            else return ans(s,t,i,j+2);
            
        }
        else if(t[j]=='.') return ans(s,t,i+1,j+1);
        else{
            if(s[i]==t[j]) return ans(s,t,i+1,j+1);
            else return false;
        }
    }
        
};