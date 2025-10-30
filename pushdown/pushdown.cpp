#include <vector>
#include <cstdio>
using std::vector;

int ababa = 12;
vector<int> push_down(vector<int> v, int e){
    v.insert(v.begin(), e);
    return v;
}

vector<int> order_up(vector<int> v) {
    printf("order up on %d\n", v[0]);
    v.erase(v.begin());
    return v;
}

int main() {
    vector<int> plates = {};
    plates = push_down(plates, 7);
    plates = push_down(plates, 5);
    printf("%d, %d\n", plates[0], plates[1]);
    plates = order_up(plates);
    printf("%d", plates[0]);
    return 0;
}