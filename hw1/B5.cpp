#include<bits/stdc++.h>
using namespace std;


int main() {
    int m, n, x;
    cin >> m >> n >> x;
    vector<int> stack1(m);
    vector<int> stack2(n);

    for (int i = 0; i<m ; i++) cin >> stack1[i];
    for (int i = 0; i<n; i++) cin >> stack2[i];

    int cnt_1 = 0, cnt_2 = 0, total_sum = 0, result = 0;

    for (auto i : stack1) {
        if (total_sum + i > x) {
            break;
        }
        total_sum += i;
        cnt_1++;
    }

    result = cnt_1;

    for (auto i : stack2) {
        total_sum += i;
        cnt_2++;
        while(total_sum > x && cnt_1 > 0) {
            total_sum -= stack1[cnt_1 - 1];
            cnt_1--;
        }
        result = (total_sum <= x) ? (max(cnt_1+cnt_2, result)) : result;
    }
    cout << result;

    return 0;
}
