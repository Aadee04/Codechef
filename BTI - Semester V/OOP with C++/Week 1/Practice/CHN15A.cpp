// AS 02/08/22

#include <iostream>
using namespace std;

int main() 
{
    int T, N, K, min, W = 0, i;
    cin >> T;
    
    if(T >= 1 && T <= 100)
    {
        while(T--)
        {
            cin >> N >> K;
            if(N >= 1 && N <= 100 && K >= 1 && K <= 100)
            {
                for(i = 0; i < N; i++)
                {
                    cin >> min;
                    if((min + K) % 7 == 0)
                        W++;
                }
            }
            cout << W << endl;
            W = 0;
        }
    }
	return 0;
}
