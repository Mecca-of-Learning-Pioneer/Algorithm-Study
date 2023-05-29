#include <iostream>
#include <algorithm>
using namespace std;

class person {
public:
	int weight;      // 몸무게
	int height;      // 키
	int rank;        // 덩치등수
};

int main() {
	person* p = new person[50];   // 각 사람들의 몸무게와 키
	int N;                        // 전체 사람 수

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> p[i].weight >> p[i].height;
	}

	// 등수는 1부터 시작. 자신보다 덩치가 큰 사람이 있으면 등수를 하나씩 낮춰감.
	for (int i = 0; i < N; i++) {
		p[i].rank = 1;
		for (int j = 0; j < N; j++) {
			if (p[i].weight < p[j].weight && p[i].height < p[j].height) {
				p[i].rank++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << p[i].rank << " ";
	}

	return 0;
}
