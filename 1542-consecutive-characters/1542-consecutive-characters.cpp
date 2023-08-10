class Solution {
public:
    int maxPower(string s) {
        int n=s.size();
        int count=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
             if(s[i]==s[i+1]){
                 count+=1;
                 maxi=max(count,maxi);
             }
             else{
                 count=0;
                 maxi=max(count,maxi);
             }
        }
        return maxi+1;
    }
};