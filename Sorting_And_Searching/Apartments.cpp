#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m,k;
    cin>>n>>m>>k;
    vector<long long int> applicants(n), departments(m);


    for(int i=0; i<n; i++){
        cin>>applicants[i];
    }

    for(int j=0; j<m; j++){
        cin>>departments[j];
    }
    sort(applicants.begin(), applicants.end());
    sort(departments.begin(),departments.end());

    int i=0, j=0, cnt=0;
    while(i<n && j<m){
        if(applicants[i]-k <= departments[j] && departments[j] <= applicants[i]+k){
            i++,j++;
            cnt++;
        }
        else if(applicants[i]+k < departments[j]){
            i++;
        }
        else{
            j++;
        }
    }

    cout<<cnt;
    return 0;
}