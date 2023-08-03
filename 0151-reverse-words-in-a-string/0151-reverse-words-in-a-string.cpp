class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans;
        int i=0;
        int j=n-1;
        while(s[i]==' ') //handling leading brackets
        {
            i++;
        }
        while(s[j]==' '){ //handling trailing brackets
            j--;
        }
        for(int k=i;k<=j;k++)
        {
            if(s[k]==' ') //handling extra spaces bw the words
            {
                while(s[k+1]==' ')
                k++;
            }
            ans.push_back(s[k]);
        }
        //processing the ans string 
          //first reverse the whole string
          //then revers each word

          reverse(ans.begin(),ans.end());
          int start=0;
          int end=0;
          n=ans.size();
        for(int i=0;i<n;i++)
        {
            if(ans[i]==' '){
                end=i-1;
                reverse(ans.begin()+start,ans.begin()+end+1);
                start=i+1;
            }
        }
        reverse(ans.begin()+start,ans.end());
       return ans;
    }
};