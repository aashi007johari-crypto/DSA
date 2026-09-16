class Solution {
public:
    bool judgeSquareSum(int c) {
     long long l=0;
     long long r=sqrt(c);

     while(l<=r)  {
        long long mul=l*l+r*r;

        if(mul>c){
            r--;
        }else if(mul<c){
            l++;
        }
        else{
            return true;
        }
     } 
     return false;
    }
};