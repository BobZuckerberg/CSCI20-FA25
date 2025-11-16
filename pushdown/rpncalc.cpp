//I want to build a stack and create a reverse polish notation calculator

#include"rpn_header.hpp"

vector<int> numbers = {1, 9999};
vector<int> operators = {};
vector<int> calutations = {};
int calcadd(int a, int b){

}

int calculate(vector<int> q) {
    for(int i=0; i<q.size(); i++){
        switch (q.at(i)) {
            
            case 9999:
                printf("ADD");
                push_q(operators, q.at(i));
                break;
            case 8888:
                printf("SUBTRACT");
                push_q(operators, q.at(i));
                break;
            default:
                push_q(calutations, q.at(i));
                break;
        }
    }
    return 0;
}

vector<int> pop_q(vector<int> q) {
    q.erase(q.begin());
    return q;
}
void push_q(vector<int> q, int e) {
    q.push_back(e);
}
void print_stack(vector<int> q) {
    for(int i=0; i<q.size(); i++) {
        printf("\n%d", q.at(i));
    }
    printf("\n");
    return;
}

int main() {
    calculate(numbers);
    print_stack(numbers);
}