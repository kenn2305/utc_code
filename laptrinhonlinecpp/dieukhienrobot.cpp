#include <iostream>
#include <string>
using namespace std;

const int RIGHT = 1;
const int DOWN = 2;
const int LEFT = 3;
const int UP = 4;

int main() {
    int dir = RIGHT;
    pair<int, int> a = {1, 0};
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;
        if (s == "trai") {
            if (dir == RIGHT) {
                dir = UP;
                a.second++;
            } else if (dir == LEFT) {
                dir = DOWN;
                a.second--;
            } else if (dir == DOWN) {
                dir = RIGHT;
                a.first++;
            } else if (dir == UP) {
                dir = LEFT;
                a.first--;
            }
        } else if (s == "phai") {
            if (dir == RIGHT) {
                dir = DOWN;
                a.second--;
            } else if (dir == LEFT) {
                dir = UP;
                a.second++;
            } else if (dir == DOWN) {
                dir = LEFT;
                a.first--;
            } else if (dir == UP) {
                dir = RIGHT;
                a.first++;
            }
        } else if (s == "thang") {
            if (dir == RIGHT) {
                a.first++;
            } else if (dir == LEFT) {
                a.first--;
            } else if (dir == DOWN) {
                a.second--;
            } else if (dir == UP) {
                a.second++;
            }
        }
    }
    cout << a.first << " " << a.second << endl;
    return 0;
}
