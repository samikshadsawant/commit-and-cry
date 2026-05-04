class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n=grid.size();
        int repeating=-1;
        int missing=-1;
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]++;
            }
        }
        
         for(int num = 1; num <= n*n; num++) {
            if(mp[num]==2) repeating=num;
            else if(mp[num]==0) missing=num;
            

        
        

        if (repeating != -1 && missing != -1)
        break;

        }
        
        
        return {repeating, missing};


        
    }
};
