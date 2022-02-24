#include<iostream>

using namespace std;

int countGoodSubstrings(string s) {
    if(s.length()<3){return 0;}
    else{
        int count = 0;
        for(int i = 0;i<s.length()-2;i++){
            if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2]){
                count++;
            }
        }
    return count ;
    }
}

int main(){
    cout<<"Hello world\n";
    int result = countGoodSubstrings("harsh maru");
    cout<<result<<"\n";
    return 0;
    
}