#include "calc.hpp"
void road_in(stack<string> x) {
    for (int i=0; i>x.size(); i++){
        int n;
        char o;
        x.top() = n;
        x.pop();
        x.top() = o;
        x.pop();
        Calc::dummy a = Calc::dummy(n, o);
        pushit.push(a);
    }
    return ;
}

int main() {
    stack<string> intake;
    intake.push("e");
    intake.push("7");
    intake.push("+");
    intake.push("0");
    road_in(intake);
    //std::cout<<(pushit.top().num);
    return 0;
}