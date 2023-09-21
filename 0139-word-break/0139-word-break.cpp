class Solution {
public:
    bool solve(string &s, vector<string>& d,unordered_map<string,int>&mp,int ind,vector<int>&dp){
        if(ind==s.size())
        return true;
        string st;
        if(dp[ind]!=-1)
        return dp[ind];
        for(int i=ind;i<s.size();i++){
            st.push_back(s[i]);
            if(mp.count(st)){
                if(solve(s,d,mp,i+1,dp))
                return dp[ind]=true;
            }
        }
        return dp[ind]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,int>mp;
        vector<int>dp(s.size()+1,-1);
        for(int i=0;i<wordDict.size();i++){
            mp[wordDict[i]]++;
        }
        return solve(s,wordDict,mp,0,dp);
    }
};