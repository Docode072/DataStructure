int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	   sort(arr , arr+n);
       int ans= 0;
        for(int i = n-1 ; i >= 2; i--){
            int a =0;
            int b = i-1;
            while(a < b){
                int sum = arr[a]+ arr[b];
                if(sum == arr[i]) ans++ , a++ , b--;
                else if(sum > arr[i]) b--;
                else a++;
            }
                
            }
       return ans;  
	}
