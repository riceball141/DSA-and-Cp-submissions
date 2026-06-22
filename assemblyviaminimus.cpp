#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<long long> arr(n*(n-1)/2);
    for(int i=0;i<n*(n-1)/2;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    long long max=arr[n*(n-1)/2-1];
    vector<int>res(n);
    int k=n-1;
    int u=0;
    int i=-1;
   while(k>0){
        for(int j=0;j<k;j++){
            i++;
        }
        res[u]=arr[i];
        u++;
        k--;
    
    }
    res[n-1]=max;
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    
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