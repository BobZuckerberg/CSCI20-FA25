#include <vector>
#include <cstdio>

using namespace std;

int puttogether(int x, int y) {
    return x + y;
}

int ababa (int x, int y) {
    return x / y;
}

int awawa (int x, int y) {
    return x * y;
}

int main () {
    vector<int> lol = {12, 14, 8, 1};
    printf("%i\n", puttogether(lol.at(3), lol.at(2)));
    printf("%i", lol.at(1));
    printf("%i", awawa (lol[2],lol[0]));
    return 0;
}