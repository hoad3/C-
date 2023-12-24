//https://freetuts.net/thuat-toan-sap-xep-chon-selection-sort-2931.html
#include <iostream>

using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void selectionSort(int a[], int n)
{
    int min;
    for(int i =0; i < n-1; i++)
    {
        min = i;
        for(int j = i+1; j < n; j++)
            if(a[j] < a[min])
            min = j;
    swap(a[min] , a[i]);
    
    }
    
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
    selectionSort(a, n);
    cout << "mang sau khi sap xep: "<< endl;
    for(int i = 0; i < n; i++)
    {
    cout << a[i] << " ";
    }
    return 0;
    
}
