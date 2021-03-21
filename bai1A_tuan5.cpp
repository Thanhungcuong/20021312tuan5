#include <iostream>

using namespace std;
int main ()
{
    int a[3];
    char b[3];
    for (int i=0;i<3;i++)
        cout<<&a[i]<< " ";
    cout<<endl;
    for (int i=0;i<3;i++)
        cout<<(void*)&b[i]<<" ";
    return 0;
}
//chuong trinh dang code dung 4 bit luu tru kieu so nguyen int, 1 bit de luu tru kieu ki tu char
