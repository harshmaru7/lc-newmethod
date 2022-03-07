#include<bits/stdc++.h>

using namespace std;

bool checkInclusion(string s1, string s2) {
        vector<int>hashmap(26,0);
        vector<int>hashmap2(26,0);
        //vector<int>freq(26,0);
        int windowsize = s1.length();
        int left=0,right=0,n=s2.length();
        if(windowsize>n){return false;}
        for(int i=0;i<s1.length();i++){
            hashmap[s1[i]-'a']++;
            hashmap2[s2[i]-'a']++;}
            //freq[s2[i]-'a']++; }
        //cout<<n<<"\n";
        //right = s1.length()-1;
        right = s1.length();
        while(right!=n){
            if(hashmap==hashmap2){return true;}
            hashmap2[s2[right++]-'a']++;
            hashmap2[s2[left++]-'a']--;
            //freq[s2[left]-'a']--;
            //if(freq[s2[left]-'a']==0){hashmap2[s2[left]-'a']=0;}
            //left++;
            //if(right!=n){       
              //  right++; - put this line above warna no use! kyuki increment ke baad
              //apne ko check karna hai ki valid hai ki nahi as an index!!
                //freq[s2[right]-'a']++;
                //hashmap2[s2[right]-'a']++;
            //cout<<left<<right<<"\n";}   
        }
     if (hashmap==hashmap2){// last comparison is left (j==s2.length())
        return true;   }
    return false;
    }


int main(){
    string s1 = "ab", s2 = "eidbaooo";
    bool ans = checkInclusion(s1,s2);
    cout<<ans<<"\n";
}