// AS 16/08/22

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, K;
        cin >> N >> K;
        if(N%K == 0)
            cout << N/K << endl;
        else
            cout << N/K + 1 << endl;
    }
    
	return 0;
}
