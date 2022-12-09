// AS 26/08/22	

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int P, Q, R;
        cin >> P >> Q >> R;
        
        if(R <= Q && R <= P)
            cout << "Alice" << endl;
        else if(Q <= P && Q <= R)
            cout << "Bob" << endl;
        else
            cout << "Draw" << endl;
    }
    
	return 0;
}
