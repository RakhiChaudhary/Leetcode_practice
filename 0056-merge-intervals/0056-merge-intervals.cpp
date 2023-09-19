class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       /* vector<vector<int>>ans;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<int>temp=intervals[0];
        for(int i=1;i<n;i++){
            if(temp[1]>=intervals[i][0])
            {
                temp[1]=max(temp[1],intervals[i][1]);
            }
            else
            {
                ans.push_back(temp);
                temp = intervals[i];
            }
        }
        ans.push_back(temp);
        return ans;*/
int n=intervals.size();
sort(intervals.begin(),intervals.end());
vector<int>temp=intervals[0];
vector<vector<int>>ans;
for(int i=1;i<n;i++){
    if(temp[1]>=intervals[i][0])
    temp[1]=max(temp[1],intervals[i][1]);
    else{
        ans.push_back(temp);
        temp=intervals[i];
    }
}
ans.push_back(temp);
return ans;
    }
};


// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
// -----
//                -----
//   ---------            
//                         --------------------


// 1. sort
// 2. iniatialize temp = intervals[0];

// [[3,3],[4,6],[4,1],[15,18]]
// 
// temp = [4,6]
// if(temp[1] >= it[i][0]){
//     temp[1] = max(it[1], temp[1]);
// }else{
//     ans.push_back(temp);
//     temp= it[i];
// }



// INTERVAL => [[2,6],[3,3]] =>[2,6]



























