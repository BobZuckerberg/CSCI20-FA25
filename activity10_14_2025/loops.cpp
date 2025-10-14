#include <cstdio>

struct blabla {
    int x;
    int y;
};
void print_cart(blabla point) {
    printf("(%d, %d)", point.x, point.y);
    return ;
}
int main() {
    blabla point_a = blabla {4, 3};
    print_cart(point_a);
    return 0;
}
