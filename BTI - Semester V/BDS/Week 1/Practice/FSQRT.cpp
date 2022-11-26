// AS 01/08/22

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int T;
   cin >> T;

   if (T >= 1 && T <= 20)
   {
      while (T--)
      {
         int N;
         cin >> N;
          if(N >= 1 && N <= 10000)
          {
            cout << int(sqrt(N)) << endl;
          }
         
      }
   }

   return 0;
}
