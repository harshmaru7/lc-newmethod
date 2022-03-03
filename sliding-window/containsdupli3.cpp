#include<bits/stdc++.h>

using namespace std;

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
//TLE         
//         for(long long i=0;i<nums.size();i++){
//             //for(long long j=i+1;j<nums.size();j++){
//             for(long long j=i+1;j<i+k+1 && j<nums.size();j++){ 
//             //long long testcase2= abs(nums[i]-nums[j]);
//                 if(abs(nums[i]*1L-nums[j])<=t){
//                     return true;
//                 }
//             }
            
//         }
//         return false;
    
        vector<pair<int,int>>sorted_nums;
        for(int i=0;i<nums.size();i++){
            sorted_nums.push_back({nums[i],i});
        }
        sort(sorted_nums.begin(),sorted_nums.end());
        for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size() && (long long)sorted_nums[j].first-sorted_nums[i].first<=t;j++){
                if(abs(sorted_nums[i].second-sorted_nums[j].second)<=k){
                    return true;                    
                }
            }
        }
        return false;
        
    }

int main(){
    vector<int>nums{1,2,3,1};int k = 3, t = 0;
    bool ans = containsNearbyAlmostDuplicate(nums,k,t);
    cout<<ans<<"\n";
}