class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<=n-2;i++)
        {
            int minInd=i;
            for(int j=i+1;j<=n-1;j++)
            {
                if(arr[j]<arr[minInd])
                minInd=j;
            }
            swap(arr[i],arr[minInd]);
        }
    }
};