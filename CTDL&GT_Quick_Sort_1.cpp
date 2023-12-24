#include <iostream>

using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int quick_sort(int a[], int left, int right)
{
    int i = left;
    int j = right;
    int p = a[(left + right) / 2];
    
    while(i <= j)
    {
        while(a[i] < p)
        i++;
        while(a[j] > p)
        j--;
        
        if(i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if(left < j)
        quick_sort(a, left, j);
    if(right > i)
        quick_sort(a, i, right);
    return 0;
}
int main()
{
    int n;
    std::cout << "nhap vao mang: " << std::endl;
    std::cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)

    {
        cout << "nhap vao phan tu thu " << i+1 << endl;
        cin >> a[i];
    }
    quick_sort(a, 0, n-1);
    cout << "mang sau khi xap xep: " << endl;
    for( int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
