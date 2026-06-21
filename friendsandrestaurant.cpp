#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr1(n);
    vector<int>arr2(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    vector<int>arr3(n);
    for(int i=0;i<n;i++){
        arr3[i]=arr2[i]-arr1[i];
    }
    sort(arr3.begin(),arr3.end());
    int s=0;
    int e=n-1;
    int hold=0;
    
    int c=0;
    while(s<e){
        if(arr3[s]+arr3[e]>=0){
            hold+=arr3[s]+arr3[e];
            s++;
            e--;
            c++;
        }
        else{
            s++;
        }
        
    }
    cout<<c<<endl;
    
    
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