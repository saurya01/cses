#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin>>n>>x;

    int cnt = 0;
    vector<long long int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    sort(nums.begin(), nums.end());

    int low = 0, high = n-1;
    while(low<=high){

        if(nums[low] + nums[high] <= x){
            low++, high--;
            cnt++;
        }
        else {
            high--;
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}