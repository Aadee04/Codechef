// AS 01/09/22


#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, D, count = 0;
        cin >> N;
        for(int i = 0; i < N; i++)
        {
            cin >> D;
            if(D >= 1000)
                count++;
        }
        
        cout << count << endl;
    }
    
	return 0;
}
