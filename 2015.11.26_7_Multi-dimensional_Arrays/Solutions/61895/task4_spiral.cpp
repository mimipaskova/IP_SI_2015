#include <iostream>

using namespace std;

int main()
{

    int Matrix [5][5];
		int numbersOnLine = 5;
		int numberToPrint = 1;
		int direction = 0;
		int posX = 0;
		int posY = 0;
		while (numberToPrint <25) {
			for (int i = 1; i <= numbersOnLine; i++) {
				switch (direction) {
				case 0: {
					Matrix[posY][posX] = numberToPrint;
					posX++;
					if (i == numbersOnLine) {
						numbersOnLine--;
						posX--;
						posY++;
					}
				}
					break;
				case 1: {
					Matrix[posY][posX] = numberToPrint;
					posY++;
					if (i == numbersOnLine) {
						posX--;
						posY--;
					}
				}
					break;
				case 2: {
					Matrix[posY][posX] = numberToPrint;
					posX--;
					if (i == numbersOnLine) {
						numbersOnLine--;
						posX++;
						posY--;
					}
				}
					break;
				case 3: {
					Matrix[posY][posX] = numberToPrint;
					posY--;
					if (i == numbersOnLine) {
						posX++;
						posY++;
					}
				}
					break;
				}
				numberToPrint++;
			}
			if (++direction == 4) {
				direction = 0;
			}
		}

		Matrix[posY][posX] = 25;

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout<<Matrix[i][j]<<" ";
			}
			cout<<endl;
		}

  return 0;
}
