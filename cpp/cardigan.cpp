#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
    string str;
    getline(cin, str);
    int times = stoi(str);
    int num = times;
    for (int cnt = 1; cnt < times; cnt++) {
        num *= times - cnt;
    }
    cout << num << endl;
    return EXIT_SUCCESS;
}

