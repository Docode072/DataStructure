//K-th element of two sorted Arrays

int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int ans[n+m];
        int i = 0; int j =0; int p = 0;
        while(i < n && j< m){
            if(arr1[i] <= arr2[j])
                ans[p++] = arr1[i++];
            
            else
                ans[p++] = arr2[j++];
            
        }
        while(i < n){
            ans[p++] = arr1[i++];
        }
        while(j< m){
            ans[p++] = arr2[j++];
        }
        
        return ans[k-1];
        
    }
