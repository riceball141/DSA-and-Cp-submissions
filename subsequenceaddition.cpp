#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr[0]!=1){
        cout<<"NO"<<endl;
    }
    else{
        bool  yes=true;
        long long sum=1;
        for(int i=1;i<n;i++){
            if(arr[i]>sum){
                yes=false;
            }
            sum+=arr[i];
        }
        if(yes){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
}
int main()
{
    int t;
    cin>>t;
    if(t<=0){
        return 0;
    }
    while(t--){
        solve();
    }
}