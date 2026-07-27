class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=0;
       sort(nums.begin(),nums.end(),greater<int>());
       for(int i=0;i<nums.size();i++){
        ans=(nums[i]-1)*(nums[i+1]-1);
        break;
       }
       return ans;
    }
};