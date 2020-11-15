class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int i = 0;
        while(i<nums.size()){
            if(nums[i] == i) {
                i++;
                continue;
            }
            if(nums[nums[i]]==nums[i]){
                return nums[i];
            }
            else{
                swap(nums[i],nums[nums[i]]);
            }
        }
        return -1;
    }
};
