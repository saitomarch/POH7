#include <iostream>
using namespace std;

string readline() {
    string str;
    getline(cin, str);
    return str;
}

int main(void){
    auto foundCnt = 0;
    const string cat = "cat";
    const auto input = readline();
    for (auto idx = 0; idx <= input.size() - cat.size(); idx++) {
        if (input[idx] == cat[0]) {
            bool found = true;
            for (auto subidx = 1; subidx < cat.size(); subidx++) {
                if (input[idx + subidx] != cat[subidx]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                foundCnt++;
            }
        }
    }
    cout << foundCnt << endl;
    return 0;
}

