//I want to build a stack and create a reverse polish notation calculator

#include"rpn_header.hpp"

vector<int> numbers = {};


int calculate(vector<int> q) { //declares the existence of my calculate function, it outputs an integer and takes vector as an argument
    for(int i=0; i<q.size(); i++){ //iterative loop, going through the entirety of the vector argument
        switch (q.at(i)) { //switch statement, depending on what i's value within the vector is, it will:
            
            case 9999: //if 9999 is inputted, it will run case 9999, or our add value
                printf("ADD\n"); // troubleshooting just to see if it knows which statement it is in.
                print_stack(q); // troubleshooting to see if it changes the stack. It doesn't. LOL :    ^)
                q = pop_q(q); // popping our stack, it SHOULD. "SHOULD." delete the first element in q
                printf("%d\n", stackit(q)); //printing our math; the actual addition.
                break; //leaving this. It still runs.
            default: //yeah so when it gets a normal number i don't really know what I want it to do, I just want it to be happy. I could put it somewhere else, or I can just pull out of this stack
                printf("Uhhh");
        }
    }
    return 0;
}

vector<int> pop_q(vector<int> q) {
    q.erase(q.begin());
    return q;
}

int pop_q_internal(vector<int> q) {
    int x = q[0];
    q.erase(q.begin());
    return x;
}
int stackit(vector<int> q) {
    int x = pop_q_internal(q);
    int y = pop_q_internal(q);
    return x + y;
}

vector<int> push_q(vector<int> q, int e) {
    q.push_back(e);
    return q;
}
void print_stack(vector<int> q) {
    for(int i=0; i<q.size(); i++) {
        printf("\n%d", q.at(i));
    }
    printf("\n");
    return;
}

int main() {
    print_stack(numbers);
    numbers = push_q(numbers, 1);
    numbers = push_q(numbers, 4);
    numbers = push_q(numbers, 9999);
    calculate(numbers);
    print_stack(numbers);
}