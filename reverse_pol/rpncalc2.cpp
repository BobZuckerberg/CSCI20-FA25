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

vector<int> answers = {};

int main(){
    sacker = push(sacker, 9999);
    sacker = push(sacker, 9);
    sacker = push(sacker, 10);
    sacker = push(sacker, 9998);
    sacker = push(sacker, 15);
    sacker = push(sacker, 6);
    sacker = push(sacker, 9999);
    sacker = push(sacker, 29);
    
    while (sacker.size()>0) {
        if (sacker.size()<=2) { // Trying to catch single inputs, like a stray 9 or something, without a pairing operative.
            printf("HI");
            int temp = topq(sacker);
            sacker = popq(sacker);
            sacker = push(sacker, answers[0]);
            sacker = push(sacker, temp);
            print_stack(sacker);
        }
        int numbercheck = topq(sacker);
        printf("%d\n", numbercheck);
        if(numbercheck == 9999) {
            sacker = popq(sacker);
            int y = topq(sacker);
            sacker = popq(sacker);
            int z = topq(sacker);
            sacker = popq(sacker);
            int result = fucker(y, z);
            answers = push(answers, result);
            printf("%d\n", result);
        }
        else if(numbercheck == 9998) {
            sacker = popq(sacker);
            int y = topq(sacker);
            sacker = popq(sacker);
            int z = topq(sacker);
            sacker = popq(sacker);
            int result = sucker(y, z);
            answers = push(answers, result);
            printf("%d\n", result);
        }
        else {
            printf("dear god help you poor freaking soul");
            break;
        }
        }
    print_stack(answers);
    sacker = popq(sacker);
    return 0;
}