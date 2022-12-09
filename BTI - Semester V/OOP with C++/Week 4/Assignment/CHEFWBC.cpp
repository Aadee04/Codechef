// AS 14/09/22

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int sum = 0, num;
        
        for(int i = 0; i < 7; i++)
        {
            cin >> num;
            sum += num;
        }
            
        if(sum >= 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
    
	return 0;
}
