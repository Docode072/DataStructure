int minRepeats(string a, string b) {
        // code here
        int count = 1; string rep = a;
        while(a.size()< b.size()){
            a += rep;
            count++;
        }
        if(a.find(b) != -1) return count;
        
        a+= rep;
        count++;
        if(a.find(b) != -1) return count;
        
         return -1;
        
        
    }
