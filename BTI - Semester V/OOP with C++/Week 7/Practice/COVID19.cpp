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
        int X[N];
        
        for(int i = 0; i < N; i++)
            cin >> X[i];
        
        int maxx = 1, minn = 999, inf = 1;
        
        for(int i = 0; i < N; i++)
        {
            if(abs(X[i] - X[i+1]) <= 2){
                inf++;
            }
            else
            {
                maxx = max(maxx, inf);
                minn = min(minn, inf);
                inf = 1;
            }
            
        }
        
        cout << minn << " " << maxx << endl;
    }
    
	return 0;
}

