#include <vector>
#include <cstdio>

using std::vector;
using std::printf;

void print_queue(vector<int> q) {
    for(int i=0; i<q.size(); i++) {
        printf("%d, ",q[i]);
    }
    return ;
}

vector<int> push_q(vector<int> q, int e) {
    q.push_back(e);
    return q;
}
vector<int> pop_q(vector<int> q) {
    q.erase(q.begin());
    return q;
}
int lookat(vector<int> q) {
    int rop = q[0];
    return rop;
}

int main() {
    vector<int> q = {};
    
    q = push_q(q, 10);
    q = push_q(q, 20);
    q = push_q(q, 30);
    q = pop_q(q);
    printf("top value is %d\n", lookat(q));
    print_queue(q);
    //printf("popped %d", rop);
    return 0;
}