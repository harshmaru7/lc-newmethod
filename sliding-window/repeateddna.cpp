#include<bits/stdc++.h>

using namespace std;

vector<string> findRepeatedDnaSequences(string s) {
    //set<string>ans;
    vector<string>ans;
    map<string,int>freq;
    if(s.length()<10){return ans;}
    for(int i=0;i<s.length()-9;i++){
        string temp;
        int count = 10,j=i;
        while(count!=0){
            temp.push_back(s[j]);
            count--;
            j++;
        }
        //cout<<temp<<"\n";
        freq[temp]++;
        //if(freq[temp]>1){ans.push_back(temp);//freq.erase(temp);
        }
    for(auto it=freq.begin();it!=freq.end();it++){
        if(it->second>1){
            ans.push_back(it->first);
        }}
return ans;            
};

int main(){
    vector<string>result = findRepeatedDnaSequences("AAAAAAAAAAAAAAAAAAAAAAAAA");
    for(int i=0;i<result.size();i++){
    cout<<result[i]<<"\n";}
    return 0;
    
}