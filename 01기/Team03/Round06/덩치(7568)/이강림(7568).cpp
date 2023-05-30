#include <iostream>
#include <vector>

using namespace std;

struct Person {
    int weight;
    int height;
    int rank;
};

int main() {
    int n;
    cin >> n;  // 사람들의 수를 입력받습니다.

    vector<Person> people(n);  // Person 구조체를 담는 벡터를 선언합니다.

    for (int i = 0; i < n; i++) {
        cin >> people[i].weight >> people[i].height;  // 각 사람의 몸무게와 키를 입력받습니다.
        people[i].rank = 1;  // 초기 랭크를 1로 설정합니다.
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (people[i].weight < people[j].weight && people[i].height < people[j].height) {
                // i번째 사람보다 j번째 사람이 몸무게와 키 모두 크다면, 등수를 1 증가시킵니다.
                people[i].rank++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << people[i].rank << ' ';  // 각 사람의 덩치 등수를 출력합니다.
    }

    return 0;
}
