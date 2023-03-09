#include<iostream>
using namespace std;

const int size = 100;
class Stack{
    public:
      
      int arr[size];
      int top;

      Stack()
      {
        top = -1;
      }

      bool isEmpty()
      {
        return top == -1;
      }

      bool isFull()
      {
        return top == size - 1;
      }
      void push(int item)
      {
        if(isFull())
        {
            cout<<"stack is overflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=item;
        }
      }
      void pop()
      {
        if(isEmpty())
        {
            cout<<"stack is underflow"<<endl;
        }
        else
        {
            top--;
        }
      }
      void display()
      {
        if(isEmpty())
        {
            cout<<"stack is underflow"<<endl;
        }
        else
        {
            for(int i = top;i >= 0;i--)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
      }
};

int main()
{
    Stack st;
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    st.display();
    st.pop();
    st.push(15);
    st.pop();
    st.display();
    return 0;
}
