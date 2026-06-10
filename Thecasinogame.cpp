#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<long long >>arr(n,vector<long long >(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<long long >>arr2(m,vector<long long >(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr2[i][j]=arr[j][i];
        }
    }
    long long res=0;
    
    for (int i = 0; i < m; i++) {
    sort(arr2[i].begin(), arr2[i].end());
    long long sum=0;
    for(int j=0;j<n;j++){
         res+=(j*arr2[i][j]-sum);
        sum+=arr2[i][j];
       
    }
    
      

}
cout<<res<<endl;

    
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