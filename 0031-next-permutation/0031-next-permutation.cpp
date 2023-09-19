class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        /*
        Approach => next permutation is the next element that is just greater than the previous one after re arranginthe element
        1. a decreasing array would never have the next permutation
        2. checking from the last , we found an element breaking the decreasing order
        3. we need to find the next just greater element and then make a swap
        4. the part of array that is after the element before swapping needs to reverse to get the next perm.
        */
       /* int n=nums.size();
        int idx1 =-1;
        int idx2 =-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                idx1 = i;
                break;
            }

        }

        if(idx1!=-1) // this condition is applied if our array is already in ascending order then there will be no breaking point and our index 1 will be -1;
       {
         for(int i=idx1+1;i<n;i++){
            if(nums[i]>nums[idx1])
            {
                idx2=i;
            }
        }
        swap(nums[idx1],nums[idx2]);
        }
        reverse(nums.begin()+idx1+1,nums.end());*/
int n=nums.size();
int ind1=-1;
int ind2=-1;
for(int i=n-2;i>=0;i--){
    if(nums[i]<nums[i+1]){
          ind1=i;
          break;
    }
}

if(ind1==-1){
    reverse(nums.begin(),nums.end());
    return;
}
for(int i=ind1+1;i<n;i++){
     if(nums[i]>nums[ind1]){
         ind2=i;
     }
     else
     break;
}

swap(nums[ind1],nums[ind2]);

reverse(nums.begin()+ind1+1,nums.end());

        
    }
};
/*
123
132

231
312

1423
1432

4321
1234

1234576
1234675

12347876 
12348677
12346875

12346578

123498765
123598764
123546789
*/

/*int n=nums.size();
int ind1=-1;
int ind2=-1;
for(int i=n-2;i>=0;i--){
    if(nums[i]<nums[i+1]){
          ind1=i;
          break;
    }
}

if(ind1==-1){
    reverse(nums.begin(),nums.end());
}
for(int i=ind1+1;i<n;i++){
     if(nums[i]>nums[ind1]){
         ind2=i;
     }
     else
     break;
}

swap(nums[ind1],nums[ind2]);

reverse(nums.begin()+ind1+1,nums.end());*/


