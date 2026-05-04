class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

       long long n=grid.size();
       long long S=(n*(n+1))/2;
       long long Sn2=(n*(n+1)*(2*n+1))/6;
       long long Sn=0;
       long long S2=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int val=grid[i][j];
            Sn+=val;
            S2+=(long long)val*val;
        }
       }
       long long val1=S-Sn;
       long long val2=S2-Sn2;
       val2=val2/val1;
       long long x=(val1+val2)/2;
       long long y=x-val1;
       return {(int)x,(int)y};




        
    }
};
