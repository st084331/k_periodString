#include <iostream>
#include <string>

using namespace std;

int strPeriod(string str) {
    int period;
    period = str.length();
    for (int i = 1; i <= ((str.length()) / 2); i++) {
        int j;
        for (j = 0; j < str.length() - i;) {
            if (str[j] == str[j + i]) { j++; } else { break; }
        }
        if (j == (str.length() - i)) {
            period = i;
            break;
        }
    }
    return period;
}

int main() {
    int N;
    cin >> N;
    for (int j = 0; j < N; j++) {
        std::string str;
        cin >> str;
        cout << strPeriod(str) << endl;
    }
    return 0;
}