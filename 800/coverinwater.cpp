#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int string_length;
        cin >> string_length;

        string input_string;
        cin >> input_string;

        int minimum_placements = 0;

        for (int index = 0; index < string_length; index++) {
            if (input_string[index] == '.') {
                int consecutive_dots = 0;

                while (index < string_length && input_string[index] == '.') {
                    consecutive_dots++;
                    index++;
                }

                if (consecutive_dots > 2) {
                    minimum_placements = 2;
                    break;
                } else {
                    minimum_placements += consecutive_dots;
                }
                
                index--; 
            }
        }

        cout << minimum_placements << '\n';
    }

    return 0;
}
