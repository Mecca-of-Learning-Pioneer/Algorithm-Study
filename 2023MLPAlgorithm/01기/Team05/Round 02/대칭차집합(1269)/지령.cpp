#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
    set<int> s;

    int n, m, num;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        s.insert(num);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> num;
        if (s.find(num) == s.end())
            s.insert(num);
        else
            s.erase(num);
    }

    cout << s.size();
    return 0;
	
}