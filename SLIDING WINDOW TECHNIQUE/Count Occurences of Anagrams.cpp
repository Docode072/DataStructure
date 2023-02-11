int search(string pat, string txt) {
	    // code here
       int p_len=pat.length();
       int t_len=txt.length();
       if(p_len>t_len) return 0;
       vector<int>p(26,0); 
       vector<int>t(26,0);
       int ans=0;
       for(int i=0; i<p_len; i++){
            p[pat[i]-'a']++; //store frequency of pat
            t[txt[i]-'a']++;  //store frequency of txt
       }
       if(p==t) ans=1; 
       for(int i=p_len; i<t_len; i++){
           t[txt[i-p_len]-'a']--; //remove window first char
           t[txt[i]-'a']++;  //slide the window
           if(p==t){ans++;} //frequncy of both same means window contain same char
        }
        return ans; 
	}
