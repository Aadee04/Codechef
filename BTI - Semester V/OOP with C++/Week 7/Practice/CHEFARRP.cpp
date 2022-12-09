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
        int A[N], count = N;
        
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        
        for(int i = 0; i < N-1; i++)
        {
            int sum = A[i], prod = A[i];
            for(int j = i+1; j < N; j++)
            {
                sum += A[j];
                prod *= A[j];
                if(sum == prod)
                    count++;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
