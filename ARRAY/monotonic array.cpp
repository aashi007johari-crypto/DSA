class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int count=0;
        int vount=0;
       for(int i=0;i<nums.size()-1;i++) {
        if(nums[i]<=nums[i+1]){
            count++;
        }
        if(nums[i]>=nums[i+1]){
            vount++;
        }
       }
       if(count==nums.size()-1||vount==nums.size()-1){
        return true;
       }
       return false;
    }
};