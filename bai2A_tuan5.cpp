#include <iostream>

using namespace std;
int factorial(int n)
{
    cout << "n= " << n << " at " << &n << endl;
    if(n==0) return 1;
    long long giaithua = n*factorial(n-1);
    return giaithua;
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
