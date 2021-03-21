#include <iostream>

using namespace std;
void thamchieu_string(string &s)
{
    cout << &s << endl;
}
void thamtri_string(string s)
{
    cout << &s << endl;
}
/*void thamchieu_mang(int& s[])
{
    for (int i=0;i<3;i++){
        s[i] ++;
        cout << &[i] << " ";
    }
}*/

void thamtri_mang(int s[])
{
    for (int i=0;i<3;i++){
        s[i] ++;
        cout<<s[i]<<" ";
    }
        cout<<endl;
}
int main()
{
    int a[3]={1,2,3};
    string s = "456";

    for (int i=0;i<3;i++)
        cout << &a[i] << " ";
    cout << endl;
    thamtri_mang(a);
    cout << &s << endl;
    thamtri_string(s);
    thamchieu_string(s);

    return 0;
        //mang: chi truyen theo co che tham tri
        //string: truyen duoc ca 2 co che tham tri va tham chieu
}
