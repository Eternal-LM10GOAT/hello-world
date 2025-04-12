#include <iostream>
using namespace std;
int main()
{
    const int a = 10;
    int *ptr = const_cast<int*>(&a);
    *ptr = 20;
    cout<<a<<" "<<ptr<<endl;
    return 0;
}