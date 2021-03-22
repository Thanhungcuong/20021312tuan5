#include <iostream>

using namespace std;
int vonglap(int key, int a[], int low, int high)
{
    while(high>=low)
    {
        int mid=(high+low)/2;
        if(a[mid]==key) return mid;
        else if (a[mid]>key) high=mid-1;
        else
            high=mid+1;
    }
    return low;
}
int dequy(int key, int a[], int low, int high)
{
    int mid=(low+high)/2;
    if(a[mid]==key) return mid;
    else if(a[mid]>key) return dequy(key,a,low,mid-1);
    else return dequy(key,a,mid+1,high);
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,10};
    int key;
    cin>>key;
    cout<<vonglap(key, a, 1, 10) << endl;
    cout << dequy(key, a, 1, 10) << endl;
    return 0;
}
