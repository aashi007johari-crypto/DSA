class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
      int l=1;
      int h=*max_element(nums.begin(),nums.end())  ;

      while(l<=h){
        int mid=l+(h-l)/2;

        long long sum=0;

        for(int n:nums){
            sum+=(n+mid-1)/mid;
        }
        if(sum<=threshold){
            h=mid-1;
        }else{
            l=mid+1;
        }
      }
      return l;
    }
};