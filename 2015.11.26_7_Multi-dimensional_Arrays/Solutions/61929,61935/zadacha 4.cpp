
#include <iostream>

using namespace std;

int main()
{
int x=5;
int d[x][x];
int start=1;
int count=start;
for(int i=0;i<x;i++){
    for(int j=i;j<x-i;j++)
        d[i][j]=count++;
    count--;
    for(int j=i;j<x-i;j++)
        d[j][x-i-1]=count++;
    count--;
    for(int j=x-i-1;j>=i;j--)
        d[x-i-1][j]=count++;
    count--;
    for(int j=x-i-1;j>i;j--)
        d[j][i]=count++;
    if(count>x*x+start)
        break;
}
for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
        cout<<d[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
