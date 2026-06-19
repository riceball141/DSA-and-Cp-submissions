#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    
    vector<long long> arr(m);
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    
    
    sort(arr.begin(), arr.end());
    
    vector<long long> arr1(m);
    for (int i = 0; i < m; i++) {
        if (arr[(i + 1) % m] > arr[i]) {
            arr1[i] = (arr[(i + 1) % m] - arr[i]) - 1;
        }
        else {
            arr1[i] = n - arr[i] + (arr[(i + 1) % m] - 1);
        }
    }
    
    sort(arr1.begin(), arr1.end());
    
    long long mask = 0;
    long long saved = 0;
    
    for (int i = m - 1; i >= 0; i--) {
        if (arr1[i] - mask > 0) {
            if (arr1[i] - mask == 1) {
                saved += 1;
            }
            else {
                saved += (arr1[i] - mask) - 1;
            }
        }
        mask += 4;
    }
    
    cout << n - saved << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    if (t <= 0) {
        return 0;
    }
    while (t--) {
        solve();
    }
    return 0;
}