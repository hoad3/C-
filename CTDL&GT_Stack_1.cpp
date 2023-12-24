//https://vntalking.com/ngan-xep-stack-cach-cai-dat-va-su-dung.html
#include <iostream>

using namespace std;
    struct stack_data
{
    private:
        int data[50];
        int top;
    public:
        stack_data() {top = -1;}
        void push(int a);
        void pop();
        int top_value();
        bool isEmpty();
        bool isfull();
};

void stack_data::push (int a)
{
    if(top >= 49)
    {
        cout << "so luong phan tu qua lon\n";
    }
    else
    {
        data[++top] = a;   
    }
}

void stack_data::pop()
{
    if(top < 0)
    {
        cout << "so luong phan tu qua nho\n";
    }
    else
    {
        top--;   
    }
}

int stack_data::top_value()
{
    if(top < 0)
    {
        cout << "stack trong \n";
        return -1;
    }
    else
    {
        return data[top];
    }
}

bool stack_data::isEmpty()
{
    return (top < 0);
}
bool stack_data::isfull()
{
    return (top >= 49);
}
int main()
{
    int n;
    cout << "nhap vao kich thuoc cua stack: ";
    cin >> n;
    stack_data stack;
    for(int i = 0; i < n; i++)
    {
        int value;
        cout << "nhap vao gia tri push: ";
        cin >> value;
        if(stack.isfull())
        {
            cout << "Stack is full\n";
            break;
        }
        else
        {
            stack.push(value);
        }
        
    }
    cout << "cac phan tu stack: ";
    while(!stack.isEmpty())
    {
        cout << stack.top_value() << " ";
        stack.pop();
    }
    return 0;
}
