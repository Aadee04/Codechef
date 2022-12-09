// AS 06/10/22

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N;
        cin >> N;
        int p = 2, s = 1, sum = 1;
        
        for(int i = 1; i <= N; i++)
        {
            cout << sum << " ";
            
            for(int j = i; j <= N-1; j++)
            {
                sum = sum + j;
                cout << sum << " ";
            }
          
            for(int K = N-1; K > (N-1)-(i-1); K--)
            {
                sum = sum + K;
                cout << sum << " ";
            }
          
            cout << endl;
            s = s + p;
            sum = s;
            p++;
        }
    }
    
    return 0;
}
