class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();
        int currSUM = nums[0];
        int maxSUM = nums[0];

        for(int i = 1 ; i < n ; i++){

            currSUM = max(nums[i], currSUM + nums[i]);

            maxSUM = max(maxSUM, currSUM);
        }

        return maxSUM;

    }
};
