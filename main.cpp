#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> &v, int size)
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
    for(auto e:v)
    {
        sum+=e;
    }
    std::cout << "sum = " <<sum << std::endl;
    std::cout<<"好好学习，天天向上"<<std::endl;
    std::cout<<"我是分支aaa"<<std::endl;
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
    //ubuntu用户添加的注释
    //windows用户添加的注释
    std::cout<<"哈哈哈哈哈哈哈"<<std::endl;
    std::cout<<"创建fixbug分支"<<std::endl;
    std::cout<<"windows上未创建分支"<<std::endl;
    return 0;
}