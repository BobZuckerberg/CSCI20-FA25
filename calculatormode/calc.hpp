#include <cstdio>
#include <stack>
#include <string>
#include <vector>
#include <iostream>

using std::cout;
using std::stack;
using std::printf;
using std::string;
using std::vector;

/*
 yeee they call me a "stack calculator", yheee you can see my monolithic object mhm

 yehqa so that's basically meanging i wil cover up whatevcer yu want dog.. stack? yueah i hide him dog yeap yep

 fucking analogy and shi man i hate this fleshy structure we're conformed to, ain't right, it ain't right at all man fuck dude

 encode my opps and numbers bruh i fucking DARE yu man I DARE YOU

 gonna use totally normal operators:
    + add 
    - sub
    * mult
    / div
    e eval (point at the number instead of the operator)

- problem: what are the basic operations of this calculator?
  Binary Operators on which two numbers will be given (a,b)
    addition: a + b
    subtraction: a - b
    multiplication: a * b
    division: a / b
    evaluation: says "this is a number, not an operator"; it is also the termination of the stack (if e is missing at the end of a stack, the stack is malformed)

- problem: what structure defines the equation's integrity perserving order
    BUILD THE STACK BUILD IT BUIIILD IT NOWWWWW
    stack<dicho> st.
    - stack of type dicho (because he tells us what to do, and gives us numbers)
- problem: ayo dog you gotta push shi in the stack before you go and calculating and shi bruh
    - gotta get shi from you man, gimme my money,
        - How: constructor or function
        - Where:
-problem: no fucking calculator dude, gotta find a way to "evaluate a saturated stack"
*/
// this shi the traphouse for opps and eval, fucked up place, NEVER go here
//dicho is a unique type (struct) which is always holding a number and a character; the character is being made significant

class Calc {
private:
    struct dicho {
        int num;
        char op;
    };
    stack<dicho> st;
    int addition(int, int);
    int subtraction(int, int);
    int multiplication(int, int);
    int division(int, int);
public:
    Calc(); //initializes values
    struct dummy {
        int num;
        char op;
        dummy(int a, char b) {
            num = a;
            op = b;
        }
    };
    void road_in(stack<string>);
};
stack<Calc::dummy> pushit;
vector<string> intake;