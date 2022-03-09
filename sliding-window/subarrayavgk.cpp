#include<bits/stdc++.h>

using namespace std;

int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        //window size is k
        //condition is >=threshold
        if(k>arr.size()){return 0;}
        long long sum = 0,ans=0;
        for(int i=0;i<k;i++){sum += arr[i];}
        //sum = sum/k;
        int left = 0,right=k-1;
        while(right < arr.size()){
            if(sum/k>=threshold){ans++;}
            //sum = sum*k;
            sum = sum-arr[left++];
            //left++;
            right++;
            if(right<arr.size()){sum += arr[right];}
        }
    return ans;    
    }

int main(){
    vector<int>arr{2,2,2,2,5,5,5,8};
    int k = 3, threshold = 4;
    int ans = numOfSubarrays(arr,k,threshold);
    cout<<ans<<endl;
}