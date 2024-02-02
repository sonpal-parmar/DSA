#include<iostream>
using namespace std;

// palindrome
int main()
{   int n;
    cout <<"enter a palindrome number: ";
    cin>>n;
   int rev=0;
    while(n!=0)
      {
          int lt=n%10;
        rev=rev*10+lt;
        n=n/10;
      }
    
   if(n=rev)
     cout<<"yes ! this number is palindrome no.";
   else 
     cout<<"no ! this number is not palindrome no.";
    return 0;
}

