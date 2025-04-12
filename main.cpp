#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> v, int size)
{
    int sum = 0;
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    std::cout << sum << std::endl;
}
int main()
{
    vector<int> v{10, 9, 28, 30, 5, 7, 11};
    std::cout << "before sort: " << std::endl;
    for (auto e : v)
    {
        std::cout << e << " ";
    }
    sort(v, v.size());
    std::cout << std::endl;
    std::cout << "after sort: " << std::endl;
    for (auto e : v)
    {
        std::cout << e << " ";
    }
    //windows用户添加的注释
    std::cout<<"哈哈哈哈哈哈哈"<<std::endl;

    return 0;
}