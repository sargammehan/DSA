class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==x)
            {
                return i;
                c++;
            }
        }
        
        if(!c)
        {
            return -1;
        }
    }
};