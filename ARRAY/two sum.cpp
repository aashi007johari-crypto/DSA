class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int a=nums.size();
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a ;j++){
            if(target==nums[i]+nums[j]){
                return{i,j};
            }
        }
    }
    return{};
    }
};