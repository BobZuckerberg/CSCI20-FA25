#include<iostream>

class Town {
private:
    int hidden_refinery(int a, int b) {
        return a + b;
    }
public:
    Town();
    int road_in(){
        int a;
        std::cin >> a;
        return a;
    }
};