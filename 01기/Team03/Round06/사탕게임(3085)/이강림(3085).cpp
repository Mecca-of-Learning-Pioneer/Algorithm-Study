//오답 -> 다시풀기

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Candy {
    char color;
};

int Check(vector<Candy>& candies) {
    int maxCount = 1;

    for (int i = 0; i < candies.size(); i++) {
        int count = 1;
        for (int j = i + 1; j < candies.size(); j++) {
            if (candies[j].color == candies[i].color){
                count++;
            }
            else{

                break;
            }
        }

        maxCount = max(maxCount, count);
    }

    return maxCount;
}

int main() {

    int N;
    cin >> N;

    vector<vector<Candy>> _board(N, vector<Candy>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> _board[i][j].color;
            
        }
    }

    int answer = 0;

    // 가로로 인접한 사탕 교환
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            swap(_board[i][j], _board[i][j + 1]);
            answer = max(answer, Check(_board[i]));
            answer = max(answer, Check(_board[j]));
            swap(_board[i][j], _board[i][j + 1]);
        }
    }

    // 세로로 인접한 사탕 교환
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            swap(_board[j][i], _board[j + 1][i]);
            answer = max(answer, Check(_board[j]));
            answer = max(answer, Check(_board[j + 1]));
            swap(_board[j][i], _board[j + 1][i]);
        }
    }

    cout << answer << endl;

    return 0;
}
