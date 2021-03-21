#include <iostream>

using namespace std;
void thamtri(int x)  /**Pass by value */
{
    x++;
    cout<<&x<<endl;
}
void thamchieu(int &x)  /** Pass by reference */
{
    x++;
    cout<<&x<< endl;
}
int main()
{
    int x=1,y=1;
    cout <<&x<<endl;
    thamchieu(x);
    cout <<&y<<endl;
    thamtri(y);
    return 0;
    //  Pass-by-value: ham sao chep gia tri va 2 bien doc lap nhau, dia chi khac nhau
    //  Pass by reference: ham in ra dia chi cua bien va thay doi gia tri bien

}
