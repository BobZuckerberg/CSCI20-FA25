#include "ob.hpp"

int main () {
    vector<char> v = {'h', 'a', 'b', 'i', 'b', 'i'};
    A obj;
    //obj.load(v);
    //obj.st_print();

    obj.vec_print(v);
    return 0;
}

void A::load(vector<char> input) {
    for(int i=0;i<input.size();i++) {
        //put all the elements from input into st
        st.push(input[i]);
    }
    return ;
}

void A::st_print() {
    for(;!st.empty();){
        char top = st.top();
        st.pop();
        printf("%c", top); 
    }
    
    return ;
}

void A::vec_print(vector<char> input) {

    stack<char> buffer;

    for(int i=0; i<input.size();i++) {
        if(i>=20) {
            break;
        }
        st.push(input.at(i));
    }
    // stack is loaded
    for(;!st.empty();) {
        buffer.push(st.top());
        st.pop();
    }

    st = buffer;

    st_print();
    return;
}
A::A() {
    st = {};
}