//include libraries
#include<cstdio>
#include<vector>
#include<iostream>
//declare namespace (use these as primitives)
using std::vector;
using std::printf;
using std::string;
//function declarations
int calcadd(int a, int b);
int calculate(vector<int> q);
vector<int> pop_q(vector<int> q);
void push_q(vector<int> q, int e);
void print_stack(vector<int> q);