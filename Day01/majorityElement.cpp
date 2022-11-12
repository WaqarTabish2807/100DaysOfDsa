class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count = 0, max{nums[0]};
        int n = nums.size();
        
        for(auto n: nums){
            if(count == 0)
                max = n;
            
            if(max == n)
                count ++;
            else 
                count --;
        }
        
        return max;
    }
};