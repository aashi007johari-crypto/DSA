class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxe=0;
        int ans=0;
      for(int i=0;i<nums.size();i++)  {
      maxe=max(maxe,nums[i]);
      }
      for(int i=0;i<nums.size();i++) {
        ans+=maxe-nums[i];
      }
      return ans;
    }
};