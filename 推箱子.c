#include<stdio.h>
#include<stdlib.h>
int arr[21][30] =
{
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,3,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,4,1,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,0,5,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,0,3,0,1,1,1,1,0,0,1,1,1,1,1,1,3,1,0},
{0,1,1,1,0,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,0,0,0,0,0,0,0,1,2,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,4,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,4,1,1,1,1,1,0,1,1,1,4,0,0,0,0,0,0},
{0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,4,1,1,1,1,1,0},
{0,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,3,1,1,1,0,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
};
void ht()
{
    for (int i = 0; i < 21; i++)
    {
        for (int t = 0; t < 22; t++)
        {
            switch (arr[i][t])
            {
            case 0:
                printf("??");
                break;
            case 1:
                printf("  ");
                break;
            case 2:
                printf("??");
                break;
            case 3:
                printf("??");
                break;
            case 4:
                printf("??");
                break;
            case 5:
                printf("??");
                break;
            }
        }
        printf("\n");
    }
}
void tui()
{
    int x, y;
    for (int i = 0; i < 21; i++)
    {
        for (int t = 0; t < 22; t++)
        {
            if (arr[i][t] == 2)
            {
                x = i;
                y = t;
            }
        }
    }
    int fx = getch();
    switch (fx)
    {
    case 'W':
        if(arr[x-2][y]==5&&arr[x-1][y]==3) break;
        if (arr[x - 1][y] == 0|| arr[x - 1][y] == 5|| arr[x - 1][y] == 4) break;
        if (arr[x - 2][y] == 0&&arr[x-1][y]==3) break;
        if (arr[x - 1][y] == 3 && arr[x - 2][y] == 4)
        {
          arr[x-2][y]=5;
          arr[x - 1][y] = arr[x][y];
          arr[x][y] -= 1;
        }
        else
        {
            if (arr[x - 1][y] == 3 && arr[x - 2][y] == 1)
            {
                arr[x - 2][y] = arr[x - 1][y];
            }
            arr[x - 1][y] = arr[x][y]; 
            arr[x][y] -= 1;
        }
        break;
    case 'S':
        if(arr[x+2][y]==5&&arr[x+1][y]==3) break;
        if (arr[x + 1][y] == 0 || arr[x + 1][y] == 5 || arr[x + 1][y] == 4) break;
        if(arr[x+2][y]==0&&arr[x+1][y]==3) break;
        if (arr[x + 1][y] == 3 && arr[x + 2][y] == 4)
        {
            arr[x + 2][y] = 5;
            arr[x + 1][y] = arr[x][y];
            arr[x][y] -= 1;
        }
        else
        {
            if (arr[x + 1][y] == 3 && arr[x + 2][y] == 1)
            {
                arr[x + 2][y] = arr[x + 1][y];
            }
            arr[x + 1][y] = arr[x][y];
            arr[x][y] -= 1;
        }
        break;
    case 'D':
        if (arr[x][y+2] == 5&&arr[x][y+1]==3) break;
        if (arr[x][y+1] == 0||arr[x][y+1]==5 || arr[x][y + 1] == 4) break;
        if (arr[x][y+2] == 0 && arr[x][y+1] == 3) break;
        if (arr[x][y+1] == 3 && arr[x][y+2] == 4)
        {
            arr[x][y+2] = 5;
            arr[x][y+1] = arr[x][y];
            arr[x][y] -= 1;
        }
        else
        {
            if (arr[x][y+1] == 3 && arr[x][y+2] == 1)
            {
                arr[x][y+2] = arr[x][y+1];
            }
            arr[x][y+1] = arr[x][y];
            arr[x][y] -= 1;
        }
        break;
    case 'A':
        if (arr[x][y - 2] == 5&&arr[x][y-1]==3) break;
        if (arr[x][y - 1] == 0 || arr[x][y - 1] == 5 || arr[x][y - 1] == 4) break;
        if (arr[x][y - 2] == 0 && arr[x][y - 1] == 3) break;
        if (arr[x][y - 1] == 3 && arr[x][y - 2] == 4)
        {
            arr[x][y - 2] = 5;
            arr[x][y - 1] = arr[x][y];
            arr[x][y] -= 1;
        }
        else
        {
            if (arr[x][y - 1] == 3 && arr[x][y - 2] == 1)
            {
                arr[x][y - 2] = arr[x][y - 1];
            }
            arr[x][y - 1] = arr[x][y];
            arr[x][y] -= 1;
        }
        break;
    }
}
int main()
{
    while (1)
    {
        system("cls");//????Ļ????һ??????
        ht();//????Ļ??????????ͼ
        tui();//ʵ???ƶ????????ӡ?
    }
    return 0;
}