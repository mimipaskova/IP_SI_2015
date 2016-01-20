#include <iostream>

using namespace std;

int main ()
{
    int row = 3;
		int coll = 5;
        int arr[row][coll];
        bool direction = true;
		int j = 0;
		int br = 1;
		for (int i = 0; i < row; i++) {
			if (direction) {
				while (j < coll)

				{
					arr[i][j] = br;
					br++;
					if (j == coll - 1) {
						break;
					}
					j++;
				}
				direction = !direction;
				continue;
			}
			if (!direction) {
				while (j >= 0) {
					arr[i][j] = br;
					br++;
					if (j == 0) {
						break;
					}
					j--;
				}
				direction = !direction;
				continue;
			}
		}
		for (int i = 0; i < 3; i++) {
			for (int k = 0; k < 5; k++) {
				cout<<arr[i][k]<<" ";

			}
			cout<<endl;
		}
    return 0;
}
