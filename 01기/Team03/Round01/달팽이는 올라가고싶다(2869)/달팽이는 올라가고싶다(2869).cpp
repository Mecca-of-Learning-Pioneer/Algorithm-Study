#include <iostream>
#include <cmath> //ceil() �Լ��� �������� ���̺귯��
using namespace std;

int main() {
	
    int A, B, V;
    cin >> A >> B >> V;
    
    // ���� �������� ��, �̲������� ������ �ݿø� ceil()�Լ��� ����Ѵ�. 
    int day = ceil((double)(V - A) / (A - B)) + 1; //��ǥ �Ÿ��� V�� �ƴ� V - A�̴�.  
    cout << day << endl;
    return 0;
}
