// AS 21/10/22

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int n = 0, global = 0, local = 0;
		cin >> n;
		int a[n];
		
		for(int i = 0; i < n; i++)
			cin >> a[i];
			
		for(int i = 0; i < n-1; i++)
		{
			for(int j = i+1; j < n; j++)
				if(a[i] > a[j])
					global++;

			if(a[i] > a[i+1])
				local++;
		}
		
		if(local == global)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}