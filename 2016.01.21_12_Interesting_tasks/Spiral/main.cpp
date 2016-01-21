#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int spiral[128][128];
    int i=0, j=0;
    int count = 1;

    for(int k=n; k>=0; k-=2){
        //right
        for(int p=0; p<k; p++){
            spiral[i][j]=count;
            count++;
            j++;
        }
        i++;
        j--;

        //down
        for(int p=0; p<k-1; p++){
            spiral[i][j]=count;
            count++;
            i++;
        }
        i--;
        j--;

        //left
        for(int p=0; p<k-1; p++){
            spiral[i][j]=count;
            count++;
            j--;
        }
        i--;
        j++;
        //up
        for(int p=0;p<k-2;p++){
            spiral[i][j] = count;
            count++;
            i--;
        }
        i++;
        j++;
    }
    for(int p=0;p<n;p++){
        printf("%1d", spiral[p][0]);
        for(int q=1;q<n;q++){
            printf(" %d", spiral[p][q]);
        }
        printf("\n");
    }
    return 0;
}
