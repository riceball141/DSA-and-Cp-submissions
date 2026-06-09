#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   vector<int>arr(2*n);
   int mask[26]={0};
    int mask1[26]={0};
   
    int c=0;
    int d=0;
    
   for(int i=0;i<n;i++){
      
       if(mask[s[i]-'a']==0){
           c++;
       }
       mask[s[i]-'a']++;
       arr[i]=c;
   }
   
   int b=n;
    for(int i=n-1;i>=0;i--){
      
       if(mask1[s[i]-'a']==0){
           d++;
       }
       mask1[s[i]-'a']++;
       arr[b]=d;
       b++;
   }
   int max=0;
   
   
   for(int i=0;i<n-1;i++){
      if(arr[i]+arr[2*n-2-i]>max){
          max=arr[i]+arr[2*n-2-i];
      }
   }
   cout<<max<<endl;
   
   

}
int main()
{
    int t;
    if(!(cin>>t)) return 0;
    while(t--){
        solve();
    }
}