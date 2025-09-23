#include <cstdio> /**/
#include <array>
#include <vector>
#include <string>

int main() {
    int i;
    std::array<int, 5> a1 = {1, 2, 3}; /*Create an array, declare its type as an integer*/
    std::array<int, 3> a2 = {1, 2, 3}; 
    std::array<int, 6> a3 = {4, 5, 9};
    std::array<char, 5> squid = {'o', 'i',}; /*Create an array, declare its type as a character*/
    std::array<std::string, 2> squid_str = {"hi", "there."};
    printf("%i", a1[0]); /*printf's, with the integer command, "%i", from the array a1, element 0 in that list.*/
    printf("%i,", a2[2]); 
    printf("\n"); /*printf's a linebreak*/
    printf("%i", a3[1]);
    std::vector<int> v1 = {1, 2,};
    printf("%i",v1[0]);
    printf("\n"); 
    printf("%c", squid.at(1));
    printf("\n"); 
    printf("%s\n", squid_str.at(0).c_str());
    printf()

    return 0;
}