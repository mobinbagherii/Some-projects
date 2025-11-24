#include <iostream>
using namespace std ;
int main () {
 int n ;
 cout << "how many numbers ? :" << endl ;
 cin >> n;
 int num ;
 int minimum ;
 cout << "enter number 1 : " << endl ;
 cin >> num ;
 minimum = num ;
     for (int i = 2 ; i <= n ; i ++ )
     {
  cout << "enter number " << i << ":" << endl ;
  cin >> num ;
           if(num < minimum) {
                   minimum = num ;
           }

     }
     cout << "smallest number is : " << minimum<< endl ;
}
