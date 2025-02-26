#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long int> nums(n, 0);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    sort(nums.begin(), nums.end());

    int cnt = 1;
    for(int i=0; i<n-1; i++){
        if(nums[i] != nums[i+1]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}