#include <iostream>
#include <vector>
#include <map>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>count;
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    int max_freq = 0;
    int m = -1; 
    
    for (auto const& p : count) {
    int element = p.first;
    int frequency = p.second;
    
    if (frequency > max_freq) {
        max_freq = frequency;
        m = element;
    }
}
    int filled=n-max_freq;
    
    int op=0;
    while(max_freq<n){
        max_freq=max_freq*2;
         op++;
    }
    cout<<op+filled<<endl;
    
    
    
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