class Solution {
  public:
  

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        
        
        // Your code here
        if(arr.size()==0) return 0;
        sort(arr.begin(),arr.end());
        int lastSmaller=INT_MIN;
        int cnt=0;
        int longest=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]-1==lastSmaller){
                cnt=cnt+1;
                lastSmaller=arr[i];
            }
            else if(arr[i]!=lastSmaller){
                cnt=1;
                lastSmaller=arr[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
        
        
      
        
    }
};
