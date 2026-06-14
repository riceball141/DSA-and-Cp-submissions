#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    
    vector<long long> presum(n);
    vector<long long> suffsum(n);
    long long sum = 0;
    long long sum1 = 0;
    
    for(int i = 0; i < n; i++){
        sum += arr[i];
        presum[i] = sum;
    }
    
    int j = 0;
    for(int i = n - 1; i >= 0; i--){
        sum1 += arr[i];
        suffsum[j] = sum1;
        j++;
    }
    
    long long absum = 0;
    for(int i = 0; i < n; i++){
        absum += arr[i];
    }
    
    
    long long max_val = LLONG_MIN; 
    
    for(int i = 0; i <= k; i++){
        long long res = absum;
        if(i > 0 && i - 1 < n){
            res -= suffsum[i - 1];
        }
        if((k - i) * 2 - 1 >= 0 && (k - i) * 2 - 1 < n){
            res -= presum[(k - i) * 2 - 1];
        }
        if(res > max_val){
            max_val = res;
        }
    }
    cout << max_val << endl;
}

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    if(t <= 0){
        return 0;
    }
    while(t--){
        solve();
    }
    return 0;
}