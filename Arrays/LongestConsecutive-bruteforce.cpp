class Solution {
  public:
  bool linearSearch(vector<int>& a, int num ){
      for(int i=0;i<a.size();i++){
          if(a[i]==num){
              return true;
          }
      }
      return false;
  }
  

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        
        int longest=1;
        for(int i=0;i<arr.size();i++){
            
            int x=arr[i];
            int cnt=1;
            while(linearSearch(arr,x+1)==true){
                
                x=x+1;
                cnt=cnt+1;
                
            }
            longest=max(longest,cnt);
        }
        return longest;
        
    }
};
