#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string getstring() {
    string str;
    getline(cin, str);
    return str;
}

template<typename T> T factorial(T n) {
    T result = 1;
    static const T limit = 100000000000;
    for(T k = 1; k <= n; k++) {
        result *= k;
        while (result % 10 == 0) {
            result /= 10;
        }
        if (result / limit > 0) {
            result %= limit;
        }
    }
    return result;
}

int main(void) {
    uint64_t inputNum = stoll(getstring());
    auto str = to_string(factorial(inputNum));
    const auto limit = 9;
    const auto zeroch = '0';
    while(str.back() == zeroch) {
        str.pop_back();
    }
    while(str.size() > limit || str.front() == zeroch) {
        str.erase(str.begin());
    }
    cout << str << endl;
    return EXIT_SUCCESS;
}

