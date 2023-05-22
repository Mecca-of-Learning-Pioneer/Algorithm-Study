//AC
#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <ctime>




using namespace std;



int main(void) {
   

   
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    clock_t start, finish;
    double duration;

    start = clock();
    

    int T; // 테스트 케이스
    cin >> T;
    cin.ignore(); // 이것을 안넣으면 N입력을 받을 때 버퍼에 생긴 '\n'을 getline()함수가 읽어서 충돌이 생길 수 있어 방지하기위해 버퍼를 초기화시킨다.

    
    
    vector<vector<char>> element; // [x1,...,xn]과 같은 형태로 배열에 들어있는 정수가 들어있는 벡터
    vector<string> result; // 출력을 위해 결과값을 넣는 벡터


    for (int i = 0; i < T; i++)
    {
        bool push_check = false;
        string str;
        int array_len;
        string array_element;
        int Dcount = 0;

        cin >> str;
        
        

        cin >> array_len;
        

        cin >> array_element;
       

        
        
        
        element.emplace_back();  // 새로운 하위 벡터 초기화

        for (const auto& ch : array_element) // 문자열 array_element의 각 요소에 대해
        {
            if (ch != ',' && ch != '[' && ch != ']' && ch != '\n') // 쉼표나 대괄호나 \n이 아니면
            {
                element[i].push_back(ch); // 벡터에 저장하기
            }
        }

        // 함수 실행 파트
        for (int j = 0; j < str.length(); j++)
        {
            char input = str[j];
            switch (input)
            {
            case 'R':
                reverse(element[i].begin(), element[i].end()); // reverse() 함수를 이용해 순서 뒤집기
                continue;

            case 'D':
                if (!element[i].empty())
                {
                    Dcount++;
                    element[i].erase(element[i].begin());
                }
                // 만약 배열이 비어있는데 D를 사용한 경우에는 에러
                else {
                    result.push_back("error");
                    push_check = true;
                    break;
                }
                continue;

            default:
                continue;
            }

        }

        string result_str;
        result_str.reserve(element[i].size() + (element[i].size() -1) + 2); // 결과 문자열의 예상 길이를 미리 할당합니다

        result_str.push_back('['); // 대괄호 추가

        for (int k = 0; k < element[i].size(); k++) {
            result_str.push_back(element[i][k]); // 문자를 직접 추가합니다

            if (k != element[i].size() - 1) {
                result_str.push_back(','); // 쉼표 추가
            }
        }

        result_str.push_back(']'); // 대괄호 추가

        if (push_check == false)
        {
            if (Dcount > array_len)
            {
                result.push_back("error");
            }
            else {
                result.push_back(result_str);
            }
        }
        

    }

    cout << endl;
    for (int x = 0; x < result.size(); x++)
    {
        cout <<result[x] << endl;
    }

    finish = clock();

    duration = ((double)finish - start) / CLOCKS_PER_SEC;
    cout << duration << "초" << endl;
    
    return 0;
}

