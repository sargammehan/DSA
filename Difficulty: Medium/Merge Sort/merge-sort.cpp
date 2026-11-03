class Solution {
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l>=r) return;
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,r,mid);
    }
        void merge(vector <int> &arr, int l, int r, int mid)
        {
            vector<int> ans;
            int i=l;
            int j=mid+1;
            
            while(i<=mid && j<=r)
            {
                if(arr[i]<=arr[j])
                {
                    ans.push_back(arr[i]);
                    i++;
                }
                else
                {
                    ans.push_back(arr[j]);
                    j++;
                }
            }
            while(j<=r)
            {
                ans.push_back(arr[j]);
                j++;
            }
            
            while(i<=mid)
            {
                ans.push_back(arr[i]);
                i++;
            }
            for(int i=l;i<=r;i++)
            {
                arr[i]=ans[i-l];
            }
        }
    
};