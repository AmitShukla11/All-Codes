#include <iostream>
using namespace std;
int log_a_to_base_b(int a, int b)
{
    return (a > b - 1)? 1 + log_a_to_base_b(a / b, b): 0;}
int main()
{
    int a;
    cout<<"Enter the number of coins";
    cin>>a;
    cout << "The number of weighs required "<<log_a_to_base_b(a, 3) << endl;
    return 0;
}
