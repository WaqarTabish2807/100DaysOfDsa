class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int s = 0, e = nums.size()-1;
        for(int i = nums.size()-1; i>=0; i--){
            //absolute = mod value
            if(abs(nums[s])>abs(nums[e]))
                res[i] = nums[s]*nums[s++];
            else
                res[i] = nums[e]*nums[e--];
        }
        return res;
    }
};
