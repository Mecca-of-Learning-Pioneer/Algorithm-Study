#include <iostream>
#include <algorithm>
using namespace std;

class person {
public:
	int weight;      // ������
	int height;      // Ű
	int rank;        // ��ġ���
};

int main() {
	person* p = new person[50];   // �� ������� �����Կ� Ű
	int N;                        // ��ü ��� ��

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> p[i].weight >> p[i].height;
	}

	// ����� 1���� ����. �ڽź��� ��ġ�� ū ����� ������ ����� �ϳ��� ���簨.
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
