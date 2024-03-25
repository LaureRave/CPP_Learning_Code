#include <array>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <string>
#include <vector>

enum Fruit
{
    Apricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays()
{
    // Implement array tests here.
    std::array<std::string, Fruit_Count> fruits;
    fruits[Apricot]   = "apricot";
    fruits[Cherry]    = "cherry";
    fruits[Mango]     = "mango";
    fruits[Raspberry] = "raspberry";
}

void try_lists()
{
    std::list<int> l1 = { 0 };
    std::list<int> l2 = { 2 };
    std::list<int> l3 = { 3 };
    std::list<int> l4 = { 4 };

    l1.merge(l2);
    l1.sort();
    l3.merge(l4);
    l2.sort();
    int  s   = l1.size();
    auto mid = l1.begin();
    std::advance(mid, s / 2);
    l1.splice(mid, l3);
    l1.sort();
}

void try_stacks()
{
    // Implement stack tests here.
    std::vector<int>                  v = { 0, 1, 2 };
    std::stack<int, std::vector<int>> s1 { v };
}

int main()
{
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}