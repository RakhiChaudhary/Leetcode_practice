class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
              
               if(iswalnum(s[i])==false)
               {
                   i++;
               }
               else if(iswalnum(s[j])==false)
               {
                   j--;
               }
               else if(tolower(s[i])==tolower(s[j]))
               {
                  i++;
                  j--;
               }
               else
                {
                    return false;
                }

        }
        return true;
        
       /* int i=0;
        int j=nums.size();
        if(nums==" ")
        return true;
        while(i<=j)
        {
            if(tolower(nums[i])<97 || tolower(nums[i])>122 || nums[i]==' ' )
            {
                i++;
            }
            if(tolower(nums[j])<97 || tolower(nums[j])>122 || nums[j]==' ' )
            {
                j--;
            }
            else if(tolower(nums[i])==tolower(nums[j]))
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;*/
    }
};