#include <iostream>
using namespace std;
int main() {

    int first , second;
    char opt ;

    cout << "enter your equation :";
    cin >> first >> opt >> second  ;

if (opt == '+')
    cout << first + second ;

else if (opt == '-')
    cout << first - second ;

else if (opt == '*')
    cout << first * second ;

else if (opt == '/'){
    if (second != 0)
     cout << first / second ;
    else
        cout << "undefined" ;
}
return 0;
}
