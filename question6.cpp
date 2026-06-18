#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch:

    cout <<"Enter a character: ";
    cin >> ch;

    if (isupper(ch))
       cout << "Upper letter";
    else
       cout << "Not an uppercase letter";
       
    return 0;   
}