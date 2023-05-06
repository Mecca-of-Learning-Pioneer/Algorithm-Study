#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



int main() {

    int t;
    cin >> t;
    string word; 
   

    cin.ignore();

    for (int i = 0; i < t; i++) {
        getline(cin, word);
        int start = 0;
        for (int j = 0; j < word.size(); j++) {
            if (word[j] == ' ') {
                reverse(word.begin() + start, word.begin() + j);    // reverse()함수 쓰려면 #include <algorithm> 써야 함
                start = j + 1;
            }

        }
        reverse(word.begin() + start, word.end());
        cout << word << endl;
    }
        
    }
