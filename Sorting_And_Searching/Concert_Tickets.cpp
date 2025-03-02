#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    vector<long long int> tickets(n), customers(m);

    for(int i=0; i<n; i++){
        cin>>tickets[i];
    }

    for(int i=0; i<m; i++){
        cin>>customers[i];
    }

    sort(tickets.begin(), tickets.end());

    int i=0, j=0;
    while(i<n && j<m){
        if(customers[j]>=tickets[i]){
            cout<<tickets[i]<<endl;
            i++, j++;
        }
        else{
            cout<<-1<<endl;
        }

    }


    return 0;
}