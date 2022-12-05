// AS 12/10/22

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, height = 0, i=1;
        cin >> N;
        
        while(i <= N)
        {
            height++;
            i += height+1;
        }
        
        cout << height << endl;
    }
    
	return 0;
}
