#include <iostream>
#include <vector>
#include <algorithm>

void display(std::vector<int> vector) 
{
    for (const auto v : vector)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;
}


int main()
{
    // CONSTRUCTION
    std::vector<int> vec(4, 0);
    display(vec);

    int array[] = { 0, 1, 2, 3, 4, 5 };
    int* iterator_on_2nd_element = &array[1];

    std::vector<int> vec2(&array[2], &array[5]);
    display(vec2);
    
    std::vector<int> vec3(&array[0], &array[6]);

    std::vector<int> sol(array, array + 6);

    display(vec3);

    // ACCES AUX ELEMENTS
    std::vector<int> full(array, array + 6);
    int size = full.size();
    
    for (int i=0; i<size / 2; i++)
    {
        int temp = full[i];
        full[i] = full[size - 1 - i];
        full[size - 1 - i] = temp;
    }

    /*for (int left = 0, right = size-1; left < right; ++left, --right)
    {
        std::swap(full[left], full[right]);
    }*/

    display(full);

    for (auto it=full.begin(); it != full.end(); it+=2) 
    {
        it = full.emplace(it, *it);
    }

    display(full);

    int array2[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::vector<int> vec4(array2, array2 + 11);

    vec4.erase(vec4.begin() + 2, vec4.begin() + 7);

    display(vec4);


    auto it = std::find(vec4.begin(), vec4.end(), 9);

    if (it != vec4.end())
    {
        vec4.erase(it);
    }

    display(vec4);

    vec4.assign(5, 2);
    display(vec4);

    vec4.assign({ 0, 2, 32, -4, 3 });
    display(vec4);

    return 0;
}

// {4, 0}  => [4, 0]  vector contenant 2 éléments 4 et 0
// initializer_list
// (4, 0)  => [0, 0, 0, 0]  vector de taille 4 ne contenant que des 0
// surcharge du constructeur (avec count et value)
