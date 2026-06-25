#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

void solve(){
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    vector<long long> d(n);
    vector<long long> b(k);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }
    for(long long i = 0; i < k; i++){
        cin >> b[i];
    }
    for(long long i = 0; i < n; i++){
        d[i] = a[i];
    }
    vector<long long> c(k);
    for(long long i = 0; i < k; i++){
        c[i] = b[i];
    }
    long long max = a[0];
    for(long long i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
        a[i] = max;
    }
    map<long long, long long> m;
    sort(b.begin(), b.end());
    long long start = 0;
    long long sum = 0;
    for(long long i = 0; i < k; i++){
        while(start < n && b[i] >= a[start]){
            sum += d[start];
            start++;
        }
        m[b[i]] = sum;
    }
    for(long long i = 0; i < k; i++){
        cout << m[c[i]] << " ";
    }
    cout << endl;
}

int main()
{
    long long t;
    cin >> t;
    if(t <= 0){
        return 0;
    }
    while(t--){
        solve();
    }
}