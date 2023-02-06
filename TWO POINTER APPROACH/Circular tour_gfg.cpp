 int tour(petrolPump p[],int n)
    {
       //Your code here
       int req = 0; // required fuel to complete all station which is before negative station 
       int extraf = 0; //extra remaining fuel
       int start = 0; // index to return as answer
       for(int i = 0 ;i < n ; i++){
           extraf += p[i].petrol - p[i].distance;
           if(extraf < 0){
               req += extraf;
               start = i+1;
               extraf = 0;
           }
       }
       if(req + extraf >= 0) return start;
       return -1;
    }
