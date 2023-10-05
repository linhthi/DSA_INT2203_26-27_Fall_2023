#include <bits/stdc++.h>
using namespace std;
int MAX = 10000;

int main() {
    int m, n;
    cin >> m >> n;
    int a1[m], a2[n];
    for (int i = 0; i < m; i++) cin >> a1[i];
    for (int i = 0; i < n; i++) cin >> a2[i];
    
    // cach 3 : O(n)
    set<int> s(a1, a1+m);
    
    bool check = true;
    for (int i = 0; i < n; i++) {
        int t = s.count(a2[i]);
        if (t != 1) check = false;
    }
    if (check) cout << "Yes";
    else cout << "No";
    
    // Cach 2 : O(n)
    // int mp[MAX];
    
    // for (int i = 0; i < m; i++) {
    //     cin >> a1[i];
    //     mp[a1[i]] = 1;
    // }
    // for (int i = 0; i < n; i++) cin >> a2[i];
    
    // int count = 0;
    
    // for (int i = 0; i < n; i++) {
    //     if (mp[a2[i]] == 1) count++;
    // }
    // if (count == n) cout << "Yes";
    // else cout << "No";
    
    // Cach 1: brute force O(n*m)
    // int a1[m], a2[n];
    
    // for (int i = 0; i < m; i++) cin >> a1[i];
    // for (int i = 0; i < n; i++) cin >> a2[i];
    
    // bool check = true;
    // for (int i = 0; i < n; i++) {
    //     bool flag = false;
    //     for (int j = 0; j < m; j++) {
    //         if (a2[i] == a1[j]) flag = true;
    //     }
    //     if (flag == false) check = false;
    // }
    // if (check) cout << "Yes";
    // else cout << "No";
    return 0;
}
