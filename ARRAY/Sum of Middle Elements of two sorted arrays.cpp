int findMidSum(int ar1[], int ar2[], int n) {
            // code here 
             vector<int>arr;

            for(int i=0;i<n;i++){

               arr.push_back(ar1[i]);

               arr.push_back(ar2[i]);

            }

            sort(arr.begin(),arr.end());

            return arr[n-1]+arr[n];
           
    }
