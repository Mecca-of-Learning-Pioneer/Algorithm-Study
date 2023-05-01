#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> unheard(n);
    for (int i = 0; i < n; i++) {
        cin >> unheard[i];
    }

    vector<string> unseen(m);
    for (int i = 0; i < m; i++) {
        cin >> unseen[i];
    }

    sort(unheard.begin(), unheard.end());
    sort(unseen.begin(), unseen.end());

    vector<string> result;

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (unheard[i] < unseen[j]) {
            i++;
        }
        else if (unheard[i] > unseen[j]) {
            j++;
        }
        else {
            result.push_back(unheard[i]);
            i++;
            j++;
        }
    }

    cout << result.size() << endl;
    for (string name : result) {
        cout << name << endl;
    }

    return 0;
}
