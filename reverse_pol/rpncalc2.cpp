#include "reverse.hpp"

vector<int> sacker = {};

vector<int> push(vector<int> q, int e){
    q.push_back(e);
    return q;
}

void print_stack(vector<int> q) {
    for(int i=0; i<q.size(); i++) {
        printf("\n%d", q.at(i));
    }
}

int topq(vector<int> q){
    return q[0];
}

vector<int> popq(vector<int> q){
    q.erase(q.begin());
    return q;
}

int fucker(int x, int y){
    int a = x + y;
    return a;
}

int sucker(int x, int y){
    int a = x - y;
    return a;
}

int main(){
    sacker = push(sacker, 9);
    sacker = push(sacker, 10);
    sacker = push(sacker, 11);
    print_stack(sacker);
    sacker = popq(sacker);
    fucker()
    return 0;
}