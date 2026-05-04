class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n=grid.size();
        int repeating=-1;
        int missing=-1;
        
         for(int num = 1; num <= n*n; num++) {
            int cnt=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==num){
                    cnt++;
                }
            }
            
        }
        if (cnt == 2) repeating = num;
            else if (cnt == 0) missing = num;

            if (repeating != -1 && missing != -1)
                break;
         }
        return {repeating, missing};


        
    }
};
