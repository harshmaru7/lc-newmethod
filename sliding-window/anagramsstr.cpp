#include<bits/stdc++.h>

using namespace std;

vector<int> findAnagrams(string s, string p) {
        //map<char>(26,0)hash;
        vector<int>hash(26,0);
        vector<int>anagram(26,0);
        vector<int>ans;
        if(s.length()<p.length()){return ans;}
        for(int i=0;i<p.length();i++){anagram[p[i]-'a']++;
                                     hash[s[i]-'a']++;}
        int k = p.length();
        int left= 0;int right=k-1;
        while(right < s.length()){
            if(hash==anagram){ans.push_back(left);}
            right++;
            hash[s[left]-'a']--;
            left++;
            if(right!=s.length()){
            hash[s[right]-'a']++;}
            
        }
        return ans;
        
    }

int main(){
    string s = "cbaebabacd", p = "abc";
    vector<int>ans = findAnagrams(s,p);
    cout<<ans[0]<<ans[1];
}