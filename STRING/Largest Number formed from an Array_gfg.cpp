 static int  myCmp(string s1 , string s2){
	    string ss2= s1.append(s2);
	    string ss1 = s2.append(s1);
	    
	    return  (ss2 > ss1) > 0 ? 1: 0 ;  
	}
	string printLargest(vector<string> &v) {
	    // code here
	    string ans="";
	    sort(v.begin(), v.end(), myCmp);
	    for(auto s : v){
	       ans.append(s);
	    }
	    
	    return ans;
	}
