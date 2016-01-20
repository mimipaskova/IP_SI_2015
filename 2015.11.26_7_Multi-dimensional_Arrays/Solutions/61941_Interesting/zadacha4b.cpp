#include <iostream>
#include <limits>

using namespace std;

int counter=0;

int goBot(int matr[], int x, int y, int rows, int columns)
{
    int xbc;
    for(int i=x*columns+y;i<rows*columns;i+=columns)
        if(matr[i]==0)
        {
            matr[i]=++counter;
            xbc=i;
        }
    return xbc;
}

int goRight(int matr[], int x, int y, int rows, int columns)
{
    int rtz;
    for(int i=x*columns+y;i<columns*(x+1);i++)
        if(matr[i]==0)
        {
            matr[i]=++counter;
            rtz=i;
        }
    return rtz;
}

int goTop(int matr[], int x, int y, int rows, int columns)
{
    int dnd;
    for(int i=x*columns+y;i>0;i-=columns)
        if(matr[i]==0)
        {
            matr[i]=++counter;
            dnd=i;
        }
    return dnd;
}

int goLeft(int matr[], int x, int y, int rows, int columns)
{
    int kky;
    for(int i=x*columns+y;i>x*columns-1;i--)
        if(matr[i]==0)
        {
            matr[i]=++counter;
            kky=i;
        }
    return kky;
}

void fillM(int neo[], int rowz, int columnz)
{
    int trash=0;
    int cc=(rowz%2==0) ? rowz/2 : rowz/2+1;
    while(cc--)
    {
        trash=goBot(neo,trash/columnz,trash%columnz,rowz,columnz);
        trash=goRight(neo,trash/columnz,trash%columnz,rowz,columnz);
        trash=goTop(neo,trash/columnz,trash%columnz,rowz,columnz);
        trash=goLeft(neo,trash/columnz,trash%columnz,rowz,columnz);
    }
}

int main()
{
    cout<<"Enter n : ";
    int n;
    while(!(cin>>n) || n<1)
    {
        cout<<"Try again bruh : ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int matrix[n*n];
    for(int i=0;i<n*n;i++)
        matrix[i]=0;
    fillM(matrix,n,n);
    for(int i=0,c=0;i<n;i++)
    {
        for(int j=0;j<n;j++,c++)
            cout<<matrix[c]<<" ";
        cout<<endl;
    }
}
