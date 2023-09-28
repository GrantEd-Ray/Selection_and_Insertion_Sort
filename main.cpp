#include <iostream>
#include <vector>

void InsertionSort(std::vector<int>& mas)
{
    for (int i = 1; i < mas.size(); i++)
    {
        for (int j = i; j > 0 && mas[j-1] > mas[j]; j--)
        {
            std::swap(mas[j - 1], mas[j]);
        }
    }
}

void SelectionSort(std::vector<int>& mas)
{
    for (int i = 0; i < mas.size() - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < mas.size(); j++)
        {
            if (mas[j] < mas[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            std::swap(mas[min_index], mas[i]);
        }
    }
}

void print(std::vector<int>& mas)
{
    for (int i = 0; i < mas.size(); i++)
        std::cout << mas[i] << " ";
    std::cout << std::endl;
}

int main() {
    std::vector<int> test = {1, 658, 54, 3, 84, 0, 97, 111, 46};
    std::vector<int> v1 = test;
    std::vector<int> v2 = test;

    InsertionSort(v1);
    SelectionSort(v2);

    print(test);
    print(v1);
    print(v2);
    return 0;
}
