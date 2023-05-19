#include <iostream>
#define ll long long 
using namespace std;
int main() {
    
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll c = a%b;
        if(c)
        cout<<b-c<<endl;
        else
        cout<<c<<endl;
    }
    return 0;
}
