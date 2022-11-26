// AS 01/08/22

#include <iostream>
using namespace std;

int main() {
	int R, C, O;
	cin >> R >> O >> C;
	if(0 <= C && C <= 36*O && R <= 720 && O >= 1 && O <= 19)
	{
    	if(R < (20-O)*36 + C)
    	    cout << "YES";
    	else
    	    cout << "NO";
	}
	return 0;
}
