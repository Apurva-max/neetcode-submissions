class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();

        // Find Pivot
        int pivot = -1;
        for(int i = n-2 ; i >=0 ; i--){
            if(nums[i] < nums[i+1]){
                pivot = i;
                break;
            }
        }

        // No pivot, reverse
        if(pivot == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find element greater than pivot
        for(int i = n - 1 ; i >=0 ; i--){
            if(nums[i] > nums[pivot]){
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        // Reverse the part after the pivot
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};