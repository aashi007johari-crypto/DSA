class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>freq;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }


        int degree=0;


        for(auto it:freq){
            degree=max(degree,it.second);
        }


        int ans=nums.size();


     for(auto it:freq){
     if(it.second==degree){

    int left=-1;
    int right=-1;

    for(int i=0;i<nums.size();i++){
        if(nums[i]==it.first){
        left=i;
        break;
    }}
    for(int i = nums.size() - 1; i >= 0; i--) {
                    if(nums[i] == it.first) {
                        right = i;
                        break;
    }
}
int length=right-left+1;

ans=min(ans,length);
}}
return ans;
    }
};