#include<bits/stdc++.h>

using namespace std;

string longestNiceSubstring(string s) {
        string ans ;
        int left=0,right = 0 ;
        int n = s.length();
        if(n<2){return ans; }
    
        vector<int>small(26,0);
        vector<int>caps(26,0);
        
        for(int i=0;i<n;i++){
            string temp ;
            temp += s[i];
            cout<<"temp"<<temp<<endl;
            fill(small.begin(),small.end(),0);
            fill(caps.begin(),caps.end(),0);
            
            if(isupper(s[i])){caps[s[i]-'A']=1;}
            else{small[s[i]-'a']=1;}
            
            for(int j=i+1;j<n;j++){
             if(isupper(s[j])){caps[s[j]-'A']=1;}
             else{small[s[j]-'a']=1;}
            temp += s[j];
             if(small==caps){
                 if(ans.length() < temp.length()){ans = temp;}
             }
            }
        }
        
        return ans;
    }


int main(){
    string s = "aAAAzAAZ";
    string ans = longestNiceSubstring(s);
    cout<<ans<<"\n";
}