#include <iostream>
#include <cstdio>

using namespace std;

string readline() {
    string str;
    getline(cin, str);
    return str;
}

int main(void){
    auto days = stoi(readline());
    for (auto day = 0; day < days; day++) {
        const auto overworks = stoi(readline());
        const auto hour = 60;
        const auto day = 24;
        const auto minSleeps = 6 * hour;
        const auto requireToSleeps = (minSleeps * hour) + (overworks / 3);
        const auto wakeUp = 7;
        
        const auto hours = ((day + wakeUp - ((requireToSleeps / hour) + ((requireToSleeps % hour) == 0 ? 0 : 1))) % day);
        const auto minutes = (requireToSleeps % hour) == 0 ? 0 : (hour - (requireToSleeps % hour));
        
        printf("%02d:%02d\n", hours, minutes);
    }
    return 0;
}
