#include <iostream>

using namespace std;
int Binary_search(int a[], int left, int right, int x)
{
    int middle;
    while(left <= right)
    {
    middle = (left + right) / 2;
    if(a[middle] == x)
    {
        return middle;
    }
        if(a[middle] < x)
            {
                left = middle + 1;
            }
        else
            {
                right = middle - 1;
            }
    }
    return -1;
}

int main() 
{
    int n;
    cout << "Nhap do dai mang: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) 
    {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> a[i];
    }
    int x;
    cout << "Nhap phan tu can tim: ";
    cin >> x;
    int result = Binary_search(a, 0, n-1, x);
    if (result == -1) 
    {
        cout << "Khong tim thay phan tu trong mang." << endl;
    } 
    else 
    {
        cout << "Tim thay phan tu " << x << " tai vi tri " << result + 1 << endl;
    }
    return 0;
}
