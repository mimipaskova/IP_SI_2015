#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout<<"Enter a number of numbers(?) for the zig-zag : ";
    int n;
    while(!(cin>>n) || n<1)
    {
        cout<<"Try again bruh : ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int numcolumn,numrow;
    if(n%5!=0)
        numcolumn=n/5+1;
    else
        numcolumn=n/5;
    if(n<5)
        numrow=n;
    else
        numrow=5;
    int spiral[numrow][numcolumn];
    int numcount=1;
    for(int i=0;i<numcolumn;++i)
    {
        if(i%2==0)
            for(int j=0;j<numrow;j++)
            {
                if(numcount<=n)
                {
                    spiral[j][i]=numcount;
                    ++numcount;
                }else
                    spiral[j][i]=0;

            }
        else
            for(int j=numrow-1;j>=0;j--)
            {
                if(numcount<=n)
                {
                    spiral[j][i]=numcount;
                    ++numcount;
                }else
                    spiral[j][i]=0;
            }
    }
    for(int i=0;i<numrow;i++)
    {
        for(int j=0;j<numcolumn;j++)
        {
            if(spiral[i][j]==0)
                continue;
            if(j%2==0 && i!=4)
                cout<<spiral[i][j]<<" ";
            else if(j%2==1 && i!=0)
                cout<<spiral[i][j]<<" ";
            else if(spiral[i][j]==n)
                cout<<spiral[i][j]<<" ";
            else
                cout<<spiral[i][j]<<"-";
            if(i!=0 && j==1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
