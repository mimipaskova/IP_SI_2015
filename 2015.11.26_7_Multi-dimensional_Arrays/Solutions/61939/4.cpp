#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int max = 15;
	int br = 1;
	cout << "n=";
	int n;
	cin >> n;
	int a[max][max];
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{

			a[i][j] = br;
			br++;
		}
	}

	for (int i = 0; i<n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j<n; j++)
			{
				cout << setw(2) << a[i][j] << " ";
			}
			cout << endl;
		}
		else
		{
			for (int j = n - 1; j >= 0; j--)
			{
				cout << setw(2) << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	cout << endl;

	int counter = 1;
	int b[max][max];
	for (int i = 0; i<max; i++)
	{
		for (int j = 0; j<max; j++)
		{

			b[i][j] = 0;
		}
	}
	int i = 0, j = 0;
	while (counter<=n*n)
	{
			do
			{
				if (b[i][j] == 0)
				{
					b[i][j] = counter;
					counter++;
					j++;
				}
				if (b[i][j] != 0 || j > n - 1)
				{
					j--;
				}

			} while (b[i][j] == 0);
			i++;

		do
		{

			if (b[i][j] == 0)
			{
				b[i][j] = counter;
				counter++;
				i++;
			}
			if (b[i][j] != 0 || i>n - 1)
			{
				i--;

			}

		} while (b[i][j] == 0);
		j--;

		do
		{
			if (b[i][j] == 0)
			{
				b[i][j] = counter;
				counter++;
				j--;
			}
			if (b[i][j] != 0 || j<0)
			{
				j++;

			}

		} while (b[i][j] == 0);
		i--;

		do
		{
			if (b[i][j] == 0)
			{
				b[i][j] = counter;
				counter++;
				i--;
			}
			if (b[i][j] != 0)
			{
				i++;
			}

		} while (b[i][j] == 0);
		j++;

	}



	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{

			cout <<setw(4)<< b[i][j];
		}
		cout << endl;
	}
	return 0;
}
