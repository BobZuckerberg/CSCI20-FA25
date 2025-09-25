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
    printf("%i", a3[1]); /* printf's, expecting an integer, the element at the 1 place in a3*/
    std::vector<int> v1 = {1, 2,}; /*creates a vector, holding integers, named v1, holding 1 and 2*/
    std::vector<std::string> v2 = {"ababa", "awawa",}; /*creates a vector, holding strings, named v2, holding ababa and awawa*/
    std::vector<int> v3 = {0, 0, 1, 1, 5, 9}; /*creates a vector, holding integers, named v1, holding 0,0,1,5,9*/
    printf("%i",v1[0]); /*printf's, expecting an integer, the zeroth element in v1*/
    printf("\n"); /*refer to line 15*/
    printf("%c", squid.at(1)); /*printfs, expecting a single character, from the array named squid, at position 1*/
    printf("\n"); /*refer to line 15*/
    printf("%s\n", squid_str.at(0).c_str()); /*printf's, expecting a string, from squid_str, at the zeroth position. It also makes a linebreak, and converts it into a c_string from a basic_string.*/
    printf("%s\n", v2.at(1).c_str());
    printf("%i", v3.at(2));

    return 0;
}