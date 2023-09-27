class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<pair<int,int>>v;
        for(auto it:mp){
            v.push_back({it.second,it.first});
        }

        for(int i=0;i<k;i++){
            pq.push({v[i].first,v[i].second});
        }

        for(int i=k;i<v.size();i++){
            if(v[i].first>pq.top().first)
            {
                pq.pop();
                pq.push({v[i].first,v[i].second});
            }
        }
        vector<int>ans;

        for(int i=0;i<k;i++)
        {
           ans.push_back(pq.top().second);
           pq.pop();
        }
        return ans;

    }
};