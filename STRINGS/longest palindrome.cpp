class Solution {
public:
    int longestPalindrome(string s) {
       unordered_map<char,int>freq;

       for(char ch:s) {
        freq[ch]++;
       }
       int ans=0;
       bool odd=false;

for(auto it : freq){
    int count=it.second;
        if(count%2==0){
            ans+=count;
        }else{
        ans+=count-1;
        odd=true;
       }

}
       if(odd){
        ans++;
       }
       return ans;
    }
};