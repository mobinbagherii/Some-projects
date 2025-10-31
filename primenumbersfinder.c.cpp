#include <iostream>
using namespace std;
int main () {
 bool isprime = true ;

for (size_t i = 3 ; i < 1000 ; i += 2){

    for (size_t j = 3 ; j < 1000 ; j+=2){

          if (i % j == 0){

               isprime = false ;
               break;
     }

    }
     if (isprime = true){

      cout << i << endl;;}

}
return 0 ;

}

