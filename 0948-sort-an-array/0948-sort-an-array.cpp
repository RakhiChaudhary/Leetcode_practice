class Solution {
public:
    void  mergeTwoSortedArr(vector<int>&nums,int start,int end){
        vector<int>temp;
        int mid=start+(end-start)/2;
        int left=start;
        int right=mid+1;

        while(left<=mid && right<=end){
            if(nums[left]<=nums[right])
            {
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left<=mid){
            temp.push_back(nums[left++]);
        }

        while(right<=end){
            temp.push_back(nums[right++]);
        }
        int k=0;
        for(int i=start;i<=end;i++){
            nums[i]=temp[k];
            k++;
        }
        
    }
    void mergesort(vector<int>&nums,int start,int end){
        //base condition
        if(start>=end)
          return;

        int mid=start+(end-start)/2;

        //applying recusrsive calls on left half of an array
        mergesort(nums,start,mid);

        //applying recusrsive calls on right half of an array
        mergesort(nums,mid+1,end);

        //merge both the sorted parts of the array
        mergeTwoSortedArr(nums,start,end);

    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};