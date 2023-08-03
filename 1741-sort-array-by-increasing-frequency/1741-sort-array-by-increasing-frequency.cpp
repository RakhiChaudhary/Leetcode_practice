class Solution {
public:
    static bool comp(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.first==b.first)
        {
            return a.second>b.second;
        }
        else
            return a.first<b.first;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        //storing the frequency of elements in the map
        for(auto it:nums){
            mp[it]++;
        }
        vector<pair<int,int>>p;
        //intserting the frequency along with its values in the vector p
        for(auto it:mp){
            p.push_back({it.second,it.first});
        }
        //sorting the vector according to the condition
        sort(p.begin(),p.end(),comp);
        //storing the elemnts from vector p to vector nums
        nums={};
        int x=p.size();
        for(int i=0;i<x;i++){
            for(int j=0;j<p[i].first;j++)
            {
                nums.push_back(p[i].second);
            }
        }
        return nums;

        /*
        1 1 2 2 2 3
        3 1 1 2 2 2 
        */
       /* vector<pair<int,int>>v(10,{0,0});
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int ele=nums[i];
            int freq=v[ele].first;
            v[ele]={freq+1,ele};
        }
        sort(v.begin(),v.end());
        int k=0;
        for(int i=0;i<10;i++)
        {
            if(v[i].first == 0)
             break;
            for(int j=0;j<v[i].first;j++)
            {
                nums[k]=v[i].second;
                k++;
            }
        }
        return nums;*/
    }
};
/*0 2 3 1 0 0 0 0 0 0
0 1 2 3 4 5 6 7 8 9
0  {0,0}
1  {0,0}
2  {0,0}
3  {0,0}
4  {0,0}


0  {0,0}
1  {2,1}
2  {3,2}
3  {1,3}
4  {0,0}

p=[[2,1],[3,2],[1,3]]
sort p*/



