// AS 24/09/22

#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int price[26], sum = 0, i;
        for(int i = 0; i < 26; i++)
            cin >> price[i];
        
        string s;
        cin >> s;
        
        sort(s.begin(), s.end());
        
        
        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            bool buy = true;
            
            for(i = 0; i < s.length(); i++)
                if(ch == s[i])
                {
                    buy = false;
                    break;
                }
            
            if(buy)
                sum += price[ch - 'a'];
        }
        
        cout << sum << endl;
        
    }
    
	return 0;
}
