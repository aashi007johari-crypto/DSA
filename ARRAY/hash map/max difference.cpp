class Solution {
public:
    int maxDifference(string s) {
       unordered_map<int,int>mp;
       for(char ch:s) {
        mp[ch]++;
       }
       int maxodd=0;
       int mineven=INT_MAX;

       for(auto it:mp){
        int freq=it.second;

        if(freq%2==1){
            maxodd=max(maxodd,freq);
        }else 
        mineven=min(mineven,freq);
       }
       return maxodd-mineven;
    }
};