class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        int idx=0;

        if(ruleKey=="type"){
            idx=0;
        }
        if(ruleKey=="color"){
            idx=1;
        }
        if(ruleKey=="name"){
            idx=2;
        }

        for(int i=0;i<items.size();i++){
            if(items[i][idx]==ruleValue){
                count++;
            }
        }
        return count;
    }
};