class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if(num%3!=0)
        return {};
        long long nas=num/3;
        return {nas-1,nas,nas+1};
      
    }
};