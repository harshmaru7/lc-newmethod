#include<bits/stdc++.h>

using namespace std;

int maxVowels(string s, int k) {
        //window size is k;
        int vowel =0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vowel++;
            }
        }
        int ans = INT_MIN;
        int right = k-1;int left =0;
        int n = s.length();
        ans = max(ans,vowel);
        
        while(right<n){
            right++;
            if(right<n){
        if(s[right]=='a'||s[right]=='e'||s[right]=='i'||s[right]=='o'||s[right]=='u'){
                vowel++;
            }
            }
         if(s[left]=='a'||s[left]=='e'||s[left]=='i'||s[left]=='o'||s[left]=='u'){
                vowel--;
            }  left++; 
            ans = max(ans,vowel);
        }
        return ans ;
    }

int main(){
    string s = "adadafsafsgdh";
    int k =3;
    int ans = maxVowels(s,k);
    cout<<ans<<endl;
}