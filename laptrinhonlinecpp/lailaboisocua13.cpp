#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

vector<ll> save;

void get_num() {
    save.resize(1000000000);
    int index = 0;
    for (int i = 0; i < 1000000000; i++) {
        if (i % 13 != 0) {
            save[index++] = i;
        }
    }
    // Resize the vector to the actual number of elements
    save.resize(index);
}

int main() {
    get_num();

    for (auto it : save) {
        cout << it << " ";
    }

    return 0;
}
