class Solution {
public:
    bool possible(vector<int>& A, int days,int cap){
        int pd=1;
        int sum=0;
        for(int i=0;i<A.size();i++){
            if(sum+A[i]>cap){
                sum=A[i];
                pd++;
                if(pd>days ||A[i]>cap)
                return false;
            }
            else
            {
                sum=sum+A[i];
            }
        }
       return true;
    }
    int shipWithinDays(vector<int>& A, int days) {
        int start=1;
        int end=0;
        int ans=0;
        int N=A.size();
        for(int i=0;i<N;i++){
            end+=A[i];
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            if(possible(A,days,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};

/*
start=1
end=45
capacity=mid=22
day1->1+2+3+4+5+6
day2->7+8
day3->9+10

start=1
end=22
capacity=11
day1=1+2+3+4
*/
