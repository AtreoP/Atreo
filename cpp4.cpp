#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char a[28]="Hello";
    int i=0,n;
    char b[n+1];
    char c='a';
    while (c != '\0')
    {
        c = a[i++];
    }

    n = i-1;
    cout<<n<<endl;
    while (i != n + 1)
    {
        b[i] = a[n - i - 1];
        i++;
    }
    while (i != n)
    {
        if (b[i] != a[i])
            break;

        i++;
    }

    if (i != n)
        cout << "The String \"" << a << "\"" << " is not a Palindrome.";
    else
        cout << "The String \"" << a << "\"" << " is a Palindrome.";

    cout << "\n\n";
    return 0;
}