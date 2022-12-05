// AS 14/08/22

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    do
    {
        if(1 <= T && T <= 1000)
        {
            int N;
            cin >> N;
            if(0 <= N && N <= 20)
               {
                   int fact = 1;
                   for(int i = 2; i <= N; i++)
                       fact *= i;
                   cout << fact << endl;
               }
        }
    }while(T--);
    return 0;
}
