#include <iostream>
using namespace std ;
int main () {
   int x ;
   int n ;
        cout << "enter your number :" << endl ;
        cin >> x ;
        cout << "enter your power :" << endl ;
        cin >> n ;
        if (x < 0 ) {
             cout << "you entered a negetive num ! " << endl ;
             return 0 ;
        }
        if (n < 0) {
              cout << "you entered a negetive num ! " << endl ;
              return 0 ;
        }
        int result = 1 ;
        for (int i = 1 ; i <= n ; i++)
        {

              result = result * x ;
        }
        cout << result << endl ;
}
