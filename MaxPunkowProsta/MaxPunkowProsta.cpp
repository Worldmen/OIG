#include <iostream>

using namespace std;

int points[100][2], maxl = 2, ile, aktualna = 2, lstrona, pstrona;

int main()
{
	cin >> ile;
	if (ile > 2)
	{
		for (int i = 0; i < ile; i++)
			cin >> points[i][0] >> points[i][1];
		for (int i = 0; i < ile; i++)
		{
			for (int j = i + 1; j < ile; j++)
			{
				aktualna = 2;
				for (int k = 0; k < ile; k++)
					if ((k != i) && (k != j))
					{
						lstrona = (points[j][0] - points[i][0])*(points[k][1] - points[i][1]);
						pstrona = (points[j][1] - points[i][1])*(points[k][0] - points[i][0]);
						if (lstrona == pstrona)
							aktualna++;
					}
				if (aktualna > maxl)
					maxl = aktualna;
			}

		}
		cout << maxl;
	}
	else if (ile == 2)
	{
		cin >> points[0][0] >> points[1][1] >> points[1][0] >> points[0][1];
		cout << "2";
	}
	else
	{
		cin >> points[0][0] >> points[0][1];
		cout << "1";
	}
	return 0;
}