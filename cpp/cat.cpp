#include <iostream>
using namespace std;

string readline() {
    string str;
    getline(cin, str);
    return str;
}

int main(void){
    auto c = 0, a = 0, t = 0;
    const auto input = readline();
    for (auto ch : input) {
        switch (ch) {
        case 'c':
            c++;
            break;
        case 'a':
            a++;
            break;
        case 't':
            t++;
            break;
        default:
            break;
        }
    }
    auto maxNum = max({c, a, t});
    auto minNum = min({c, a, t});
    
    cout << minNum << endl;
    cout << maxNum - c << endl;
    cout << maxNum - a << endl;
    cout << maxNum - t << endl;

    return 0;
}

