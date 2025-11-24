//این برنامه مشخص میکند که یک عدد عدد کامل است یا نه
#include <iostream>
using namespace std ;
int main () {
    int n ;
    int sum = 0 ;
    cout << "enter your number :" << endl ;
    cin >> n ;
    for (int i = 1 ; i < n ; i++) {
           if (n % i == 0) {
                sum += i ;
           }
    }
    if (sum == n ) {
         cout << n << " is a perfect number" << endl ;
         return 0 ;
    }
    else {
     cout << n << " is not a perfect number " << endl ;
    }
    return 0 ;
 }
