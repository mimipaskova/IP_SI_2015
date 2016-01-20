#include<iostream>;
#include <stdio.h>

#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4
//Choose size here
#define MAX 5

using namespace std;

void reversedPrint(){
	int initial_direction = RIGHT, n = MAX, p = 1;

	int r, c, a[MAX][MAX];

	int row_right = 0, row_left = 1;

	//Set all elements to 0

	for (r = 0; r < MAX; r++)
	{
		for (c = 0; c < MAX; c++)
			a[r][c] = 0;

	}

	//Generate elements of the spiral matrix

	while (p != n*n + 1)
	{

		if (initial_direction == RIGHT)
		{
			//Move RIGHT
			for (c = 0; c < n; c++)
			{
				if (a[row_right][c] == 0)
					a[row_right][c] = p++;

			}
			row_right+=2;
			initial_direction = LEFT;
		}
		else if (initial_direction == LEFT)
		{
			//Move left
			for (c = n - 1; c >= 0; c--)
			{
				if (a[row_left][c] == 0)
					a[row_left][c] = p++;

			}
			row_left+=2;
			initial_direction = RIGHT;
		}
	}

	cout << endl;

	for (r = 0; r < MAX; r++)
	{
		for (c = 0; c < MAX; c++)
			cout << a[r][c] << " ";

		cout << endl;
	}
}

void spiralPrint(){
	int initial_direction = UP, n = MAX, p = 1;

	int r, c, a[MAX][MAX];

	int row_right = 0, column_down = n - 1, row_left = n - 1, column_up = 0;

	//Set all elements to 0

	for (r = 0; r < MAX; r++)
	{
		for (c = 0; c < MAX; c++)
			a[r][c] = 0;

	}


	//Generate elements of the spiral matrix

	while (p != n*n + 1)
	{

		if (initial_direction == UP)
		{
			//Move RIGHT

			r = row_right++;

			for (c = 0; c < n; c++)
			{
				if (a[r][c] == 0)
					a[r][c] = p++;

			}

			initial_direction = RIGHT;
		}
		else if (initial_direction == RIGHT)
		{
			//Move down

			c = column_down--;

			for (r = 0; r < n; r++)
			{

				if (a[r][c] == 0)
					a[r][c] = p++;
			}

			initial_direction = DOWN;
		}
		else if (initial_direction == DOWN)
		{
			//Move left

			r = row_left--;

			for (c = n - 1; c >= 0; c--)
			{
				if (a[r][c] == 0)
					a[r][c] = p++;

			}

			initial_direction = LEFT;
		}
		else if (initial_direction == LEFT)
		{
			//Move up

			c = column_up++;

			for (r = n - 1; r >= 0; r--)
			{

				if (a[r][c] == 0)
					a[r][c] = p++;

			}
			initial_direction = UP;
		}

	}

	cout << endl;

	for (r = 0; r < MAX; r++)
	{
		for (c = 0; c < MAX; c++)
			cout << a[r][c] << " ";

		cout << endl;
	}



}


int main(){
	reversedPrint();
	cout << endl;
	spiralPrint();
	
	system("pause");
	return 0;
}