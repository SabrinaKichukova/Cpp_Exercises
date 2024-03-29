#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int a , b;
   cin >> a >> b;

   if((b == 0))
   {
      cout << "1" << endl;

   }
   else if (a == 0){
      cout << "0" << endl;
   }
   else if (b < 0){
      b = b * -1;
      cout << pow(a, b) << endl;

   }
   else
   {
      cout << pow(a, b) << endl;
   }

   return 0;
}