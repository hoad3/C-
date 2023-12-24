#include <iostream>

using namespace std;
int insertion_sort(int a[], int n)
{
    int pos,x;
    for(int i = 1; i < n; i++)
    {
        x = a[i]; pos = i-1;
        while((pos >= 0) && (a[pos] > x))
        {
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1] = x;
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
    cout<<"------------------------------"<<endl;
    int result = insertion_sort(a,n);
    for(int i = 0; i < n; i++)
    {
    cout << a[i] << endl;
    }
    return 0;
}
