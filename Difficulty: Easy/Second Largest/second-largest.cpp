class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
         int max=arr[0];
         int second_max = 0;
         int n=arr.size();
         for(int i=1;i<n;i++)
         {
             if(arr[i]>max)
             {
                 second_max=max;
                 max=arr[i];
             }
             else if(arr[i]<max && arr[i]>second_max)
             {
                 second_max=arr[i];
             } 
         }
         if(second_max)
         {
            return second_max;
         }
         else
         {
            return -1;
         }
    }
};