// AS 14/09/22

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        char ch;
        cin >> ch;
        
        switch(tolower(ch))
        {
            case 'b':
                cout << "BattleShip" << endl;
                break;
            case 'c':
                cout << "Cruiser" << endl;
                break;
            case 'd':
                cout << "Destroyer" << endl;
                break;
            case 'f':
                cout << "Frigate" << endl;
                break;
        }
    }
    
	return 0;
}
