class Solution {
public:
    int countDigits(int num) {
        int og=num;
        int count=0;
      while(num>0) {
        int digits=num%10;
if(og%digits==0){
    count++;
}
num=num/10;
      } 
      return count;
    }
};