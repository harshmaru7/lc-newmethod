#include<bits/stdc++.h>

using namespace std;

int uniqueChars(vector<int>a){
       int ans=0 ;
       for(int i=0;i<a.size();i++){
           if(a[i]>0){ans++;}
       }return ans;
    }
    
    int characterReplacement(string s, int k) {
     //just need to keep track of number of unique chars in 
        //in the substring and if its less than k-1;update;
        //if(k==0){return 1;}
        int left =0,right=0;
        int n = s.length();
        vector<int>repeat(26,0);
        int ans = INT_MIN;
        int unique = 0;
        while(right < n){
            if(repeat[s[right]-'A']==0){
                unique++;
                //repeat(s[right]-'A')=1;
                repeat[s[right]-'A']++;
            }else{repeat[s[right]-'A']++;}
            
            int maxrepeat = *max_element(repeat.begin(), repeat.end());
            // if((right-left+1)-maxrepeat<=k){
            //if(unique-1<=k){
                //ans = max(ans,right-left+1);
            // }
            // else{
                while((right-left+1)-maxrepeat>k){
                    repeat[s[left]-'A']--;
                    //int check; 
                    //check = uniqueChars(repeat);
                    //if(check-1<=k){break;}
                    left++;
                    //unique = check;
                }
            //}
        ans = max(ans,right-left+1);    
        right++;
        }
        
    return ans;
    }

int main(){
    string s = "ABAB";int  k = 2;
int ans = characterReplacement(s,k);
cout<<ans;
}