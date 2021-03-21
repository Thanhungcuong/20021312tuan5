#include <iostream>

using namespace std;
int main()
{
    int x=1, y=2;
    int &thamchieu = x;
    cout << &x << " " << &thamchieu << endl;
    /** phan a:bien tham chieu va bien la 1 bien trong bo nho*/


    /** phan b:khong the khai bao 1 tham chieu ma chua chieu ngay no toi 1 bien thuong*/

    int thamchieu2=y;
    cout << &thamchieu2 << " " << &y << endl;
    /** bien tham chieu van tro toi bien ban dau */
    return 0;
}
