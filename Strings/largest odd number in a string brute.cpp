class Solution {
public:
    string largestOddNumber(string num) {
        string result;
        for(int i=0;i<num.size();i++){
            if((num[i]-'0')%2==1){
                result=num.substr(0,i+1);
            }
        }
        return result;
    }
};
