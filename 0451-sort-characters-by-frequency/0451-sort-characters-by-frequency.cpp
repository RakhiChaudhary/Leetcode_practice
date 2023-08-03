class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        for(auto ch:s){
            mp[ch]++;
        }
        vector<pair<int,char>>v;
        for(auto it:mp)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater<>());
        s="";
        int x=v.size();
        for(int i=0;i<x;i++){
            for(int j=0;j<v[i].first;j++)
            {
                s.push_back(v[i].second);
            }

        }
       return s; 
    }
};
/*
tree
t 1
r 1
e 2

v= [[1,t],[1,r],[2,t]]
   [[2,t]],[1,t],[1,r]]
   
*/