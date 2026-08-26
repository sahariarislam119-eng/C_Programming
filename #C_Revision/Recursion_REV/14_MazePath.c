#include<stdio.h>
int maze(int cr,int cc, int er, int ec) //c=>Current, e=>Ending, r=>Row, c=>Column
{
    int rightWays=0, downWays=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er)
    {
        //Calls only rightWays
        rightWays += maze(cr,cc+1,er,ec);
    }
    if(cc==ec)
    {
        //Calls only downWays
        downWays += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec)
    {
        // Calls both rightWays and downWays
        rightWays += maze(cr,cc+1,er,ec);
        downWays += maze(cr+1,cc,er,ec);
    }
    return rightWays + downWays;
}
int main()
{
    int r,c;
    printf("\nEnter no of rows: ");
    scanf("%d",&r);
    printf("\nEnter no of column: ");
    scanf("%d",&c);
    printf("\nNuber of ways = %d.\n",maze(1,1,r,c));
    return 0;
}