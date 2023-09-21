#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<char> tasks(m);
    for (int i = 0; i < m; i++) {
        char c;
        cin >> c;
        tasks[i]= c;
    }
    vector<int> freq(26, 0);
    for (auto ch : tasks)
        freq[ch -'A']++;

    cout << tasks.size();

    int max_count = *max_element(freq.begin(), freq.end());
    // cout << max_count << endl;

    int result = (max_count - 1)* n;
    // cout << result << endl;


    for (auto f : freq) {
        if (f == max_count) result++;
    }

    cout << max(result, (int)tasks.size());
    return 0;
}
