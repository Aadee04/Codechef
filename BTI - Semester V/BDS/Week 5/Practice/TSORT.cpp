// AS 21/10/22

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	vector <int> a(t);
	
	for(int i = 0; i < t ; i++)
	    cin >> a[i];

	sort(a.begin(),a.end());
	
	for(int x : a)
	    cout << x << endl;
	return 0;
}

