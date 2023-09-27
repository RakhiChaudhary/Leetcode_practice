class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        priority_queue<pair<int,int>>q;

        for(int i=0;i<k;i++){
            q.push({nums[i],i});
        }

        ans.push_back(q.top().first);

        for(int i=k;i<nums.size();i++){
           
           q.push({nums[i],i});
           while(q.top().second<=i-k){
               q.pop();
           }
           ans.push_back(q.top().first);
        }
        return ans;
       /* list<int>l;
        vector<int>ans;
        int i=0;
        int j=0;
        while(j<nums.size()){
            while(!l.empty() && l.back()<nums[j])
            l.pop_back();
            
            l.push_back(nums[j]);

            if(j-i+1==k){
                ans.push_back(l.front());

                if(nums[i]==l.front()){
                    l.pop_front();
                }

                i++;
            }
            j++;

        }

     return ans;*/
    }
};


