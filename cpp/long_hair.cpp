#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
using namespace std;
int main(void){
    const auto times = 5;
    map<string, int> answer_map;
    for (int cnt = 0; cnt < times; cnt++) {
        string str;
        getline(cin, str);
        answer_map[str] += 1;
    }
    string answer;
    int num = 0;
    for (auto pair : answer_map) {
        if (pair.second > num) {
            answer = pair.first;
            num = pair.second;
        }
    }
    cout << answer << endl;
    return EXIT_SUCCESS;
}

