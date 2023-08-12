class NumArray {
public:
    vector<int>presum;
    NumArray(vector<int>& nums) {
       presum=nums;
       for(int i=1;i<nums.size();i++) 
       {
           presum[i]=nums[i]+presum[i-1];
           cout<<presum[i]<<" ";
       }
    }
    
    int sumRange(int left, int right) {
       int leftsum=presum[left];
        int rightsum=presum[right];
        if(left==0)
        return rightsum;
        return (presum[right]-presum[left-1]);
    }
};

/**
[-2, 0, 3, -5, 2, -1]
 -2, -2,1, -4, -2, -3
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */