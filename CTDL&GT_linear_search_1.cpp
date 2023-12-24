//https://freetuts.net/thuat-toan-tim-kiem-tuyen-tinh-2630.html
#include <iostream>

using namespace std;
int Liner_search(int a[], int n, int x)
{
    for(int i = 0; i < n; i++)
    
        if(a[i] == x)
        return i;
    return -1;
}
int main()
{
    int n;
    std::cout << "\nnhap vao mang: " << std::endl;
    std::cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cout << "\nhap vao phan tu thu: " << i+1 << endl;
        cin >> a[i];
    }
    int x;
    cout << "\nnhap vao phan tu can tim: " << endl;
    cin >> x;
    int result = Liner_search(a, n ,x);
    if(result == -1)
    cout << "\nkhong tim thay phan tu" << endl;
    else
     cout << "Tim thay phan tu " << x << " tai vi tri " << result + 1 << endl;
     return 0;
}
