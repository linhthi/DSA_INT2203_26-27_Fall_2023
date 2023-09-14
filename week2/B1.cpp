#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> a(n);
    for(int i = 0; i <=n; i++) {
         //cin >> a[i]; // Cach 1
        int x;
        cin >> x;
        a.push_back(x);
    }
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) cnt++;
        }
    }
    cout << cnt;
    return 0;
}
