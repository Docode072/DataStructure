string FirstNonRepeating(string s){
		    // Code hereunore
		    string ans =""; vector<char>v; // v for order vector
		    vector<int>fre(26 ,0);
		    for(int i = 0; i< s.size();i++)
		   {
		      if(fre[s[i]-'a']==0)
		         v.push_back(s[i]);
		        
		      fre[s[i]-'a']++;
		      int f=0;
		      int m = v.size();
		      for(int i = 0; i< m ;i++){
		          if(fre[v[i]-'a']==1){
		              ans+= v[i];
		              f=1;
		              break;
		          }
		      }
		      if(!f)
		          ans+= '#';
		    }
		           
		  return ans;
		}
