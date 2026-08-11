class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
      vector<int>ans;
      sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size()-1;i++){
        int start=nums[i]+1;
       while(start<nums[i+1]){
            ans.push_back(start);
         start++;
        }
      }
      return ans;
    }
};
