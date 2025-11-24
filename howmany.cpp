//این کد توضیح میده که عدد ورودی کاربر چند رقم داره
#include <iostream>
using namespace std ;
int main () {
     long long n ;
     cout << "enter your number :" << endl ;
     cin >> n ;
     if (n < 0){
           n = -n ;
     }
     if (n == 0) {
         cout << "1" << endl ;
         return 0 ;
     }
     int x = 0 ;
     while (n > 0) {
     n /= 10 ;
     x++ ;
     }
     cout << x ;
  }

