#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cout <<"Enter Number:\n";
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2 == 1){
            n = n*3 + 1;
            cout<<n<<" ";
        }
        else{
            n = n/2;
            cout<<n<<" ";
        }
    }

    return 0;
}