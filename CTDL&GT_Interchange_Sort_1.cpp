//https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-doi-cho-truc-tiep-interchange-sort
#include <iostream>

using namespace std;
void swap(int &a, int &b)
{
    int x = a;
    a = b;
    b = x;
}
int Interchange_Sort(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
        for(int j = i +1; j < n; j++)
    if (a[i] > a[j])
    swap (a[i], a[j]);
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
    Interchange_Sort(a, n );
    cout << "mang sau khi sap xep: "<< endl;
    for(int i = 0; i < n; i++)
    {
    cout << a[i] << " ";
    }
    return 0;
    
}
