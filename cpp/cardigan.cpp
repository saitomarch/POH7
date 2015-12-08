#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
    string str;
    getline(cin, str);
    int num = stoi(str);
    int answer = num;
    for (int cnt = 1; cnt < num; cnt++) {
        answer *= num - cnt;
    }
    cout << answer << endl;
    return EXIT_SUCCESS;
}

