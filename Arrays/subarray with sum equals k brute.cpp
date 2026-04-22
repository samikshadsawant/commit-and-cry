class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum+=nums[k];
                }
                if(sum==k){

                    cnt++;

                }
                
            }
        }
        return cnt;
        
    }
};
