class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    { 
        int max_sum = INT_MIN , curr_sum = 0;
        int i = 0 ;
        while(i < nums.size())
        {
            curr_sum = curr_sum+nums[i];
            if(curr_sum > max_sum)
            {max_sum = curr_sum;}
            curr_sum = max(0,curr_sum);
            i++;
        }     
        return max_sum;
    }
};