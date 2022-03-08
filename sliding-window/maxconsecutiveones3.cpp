#include<bits/stdc++.h>

using namespace std;

int longestOnes(vector<int>& nums, int k) {
        int ans = INT_MIN;
        int left=0,right=0;
        int n = nums.size();
        vector<int>hmap(2,0);
        while(right<n){
            if(nums[right]==1){hmap[1]++;}
            else{hmap[0]++;}
            
            while(abs(hmap[1]-(right-left+1))>k){
                if(nums[left++]==1){hmap[1]--;}
            }
            if(abs(hmap[1]-(right-left+1))<=k){
                ans = max(ans,right-left+1);
            }
        right++;
        }
        
    
    return ans;
    }

int main(){
    vector<int>nums{1,1,1,0,0,0,1,1,1,1,0}; int k = 2;
    int ans = longestOnes(nums,2);
    cout<<ans<<endl;
}