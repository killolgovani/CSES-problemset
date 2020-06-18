#include<iostream>
using namespace std;
typedef long long ll;
 
int main() {
    
    ll n,x;
    cin>>n;
    ll sum = 0;
    
    for(int i=0;i<n-1;i++){
        cin>>x;
        sum += x;
    }
    
    cout<< n*(n+1)/2 - sum<<"\n";
    
    
    return 0;
}
