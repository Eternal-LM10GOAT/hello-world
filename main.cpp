#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> v,int size)
{

}
int main()
{
    vector<int> v{10,9,28,30,5,7,11};
    std::cout<<"before sort: "<<std::endl;
    for(auto e:v)
    {
        std::cout<<e<<" ";
    }
    sort(v,v.size());
    std::cout<<"after sort: "<<std::endl;
    for(auto e:v)
    {
        std::cout<<e<<" ";
    }
    return 0;
}