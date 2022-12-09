// AS 30/09/22

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
        
        int A[N];
        for(int i = 0; i < N; i++)
            cin >> A[i];
        
        int frames = 0;
        for(int i = 0; i < N; i++)
        {
            if(A[i] == A[i+1])
                continue;
            ++frames;
        }
        
        cout << frames << endl;
    }
    
	return 0;
}
