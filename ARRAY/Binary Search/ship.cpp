class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
       int l=*max_element(weights.begin(),weights.end()) ;
       int h=accumulate(weights.begin(),weights.end(),0);

       while(l<=h){
        int mid=l+(h-l)/2;
    
    int day=1;
    int sum=0;

    for(int w:weights){
        if(sum+w>mid){
            day++;
            sum=0;
        }
        sum+=w;
    }
    if(day<=days){
     h=mid-1;   
    }else{
        l=mid+1;
    }
       }
       return l;
    }
};