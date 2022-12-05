// AS 19/09/22

#include <iostream>
using namespace std;

int main() 
{
    int R;
    cin >> R;
    
    while(R--)
    {
        int L, i;
        char ch;
        cin >> L;
        int pair = 0;  
        
        for(i = 0; i < L; i++)
        {
            cin >> ch;
            if(ch == 'H')
            {
                if(pair == 0)
                {
                    pair += 1;
                    continue;
                }
                break;
            }
            else if(ch == 'T')
            {
                if(pair != 1)
                    break;
                pair -= 1;
            }
        }
        
        if(i == L && pair == 0)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;
            
        while(++i < L)
            cin >> ch;
    }
    
	return 0;
}
