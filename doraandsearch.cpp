#include <iostream>
#include <vector>
#include <climits>
#include <numeric>
using namespace std;
void solve(){
   int  n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int max=n;
   int min=1;
   int s=0;
   int e=n-1;
   while((arr[s]==max||arr[s]==min||arr[e]==max||arr[e]==min)&&s<e){
       if(arr[s]==max){
           s++;
           max--;
       }
       else if(arr[s]==min){
           s++;
           min++;
       }
        if(arr[e]==max){
            e--;
            max--;
        }
        else if(arr[e]==min){
            e--;
            min++;
        }
   }
   if(s<e){
       cout<<s+1<<" "<<e+1<<endl;
   }
   else{
       cout<<-1<<endl;
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