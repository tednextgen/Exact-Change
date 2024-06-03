#include <iostream>
using namespace std;

int main() {
   int money;
   int d;
   int q;
   int dime;
   int n;
   cin >> money;
   if(money > 0){
      d = money / 100;
      money = money - (d * 100);
      q = money / 25;
      money = money - (q * 25);
      dime = money / 10;
      money = money - (dime * 10);
      n = money / 5;
      money = money - (n * 5);
      if( d > 1){
         cout << d << " Dollars" << endl;
      }
      if(d == 1){
         cout << d << " Dollar" << endl;
      }
      if(q > 1){
         cout << q << " Quarters" << endl;
      }
      if(q == 1){
         cout << q << " Quarter" << endl;
      }
      if(dime > 1){
         cout << dime << " Dimes" << endl;
      }
      if(dime == 1){
         cout << dime << " Dime" << endl;
      }
      if(n > 1){
         cout << n << " Nickels" << endl;
      }
      if(n == 1){
         cout << n << " Nickel" << endl;
      }
      if(money > 1){
         cout << money << " Pennies" << endl;
      }
      if(money == 1){
         cout << money << " Penny" << endl;
      }
   }else{
      cout << "No change" << endl;
   }
   return 0;
}
