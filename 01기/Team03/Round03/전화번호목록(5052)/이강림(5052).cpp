#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

    int t; // 테스트 케이스의 개수
    cin >> t;
    
    // 테스트 케이스마다 결과를 저장할 벡터
    vector<string> result(t, "YES"); // 초기값을 "YES"로 설정
    
    while (t > 0) { // 각 테스트 케이스에 대해

        int n; // 전화번호의 수
        cin >> n;
        
        vector<string> phoneVec; // 전화번호 목록을 저장할 벡터
        
        for (int i = 0; i < n; i++) {
            string phone;
            cin >> phone;
            phoneVec.push_back(phone); // 전화번호를 벡터에 추가
        }
        
        sort(phoneVec.begin(), phoneVec.end()); // 전화번호 목록을 정렬
        
        for (int k = 0; k < phoneVec.size() - 1; k++) {
            int currentLen = phoneVec[k].length();
            int nextLen = phoneVec[k + 1].length();
            if (currentLen >= nextLen) {
                continue;
            }
            
            if (phoneVec[k + 1].substr(0, currentLen) == phoneVec[k]) { // 다음 전화번호의 접두어가 현재 전화번호와 같은 경우
                result[t-1] = "NO"; // 일관성이 없음, 결과를 "NO"로 설정
               
            }
            break;
            
        }
        phoneVec.clear();
        t--; // 테스트 케이스 개수 감소
    }

    // 결과 출력
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }

    return 0;

}
