#include <stdio.h>
#define size 5
int MaxProduct(int a[])
{
    int p = 1;
    static int copy = 1;
    static int i= 0;
    if (i == 5)
    {
        return copy;
    }
    else
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = i + 2; k < size; k++)
            {
                p = a[i] * a[j] * a[k];
                if (p > copy)
                {
                copy=p;
                }
            }
        }
        i++;
        MaxProduct(a);
    }
}
int main()
{
    int array[size] = {20, 10, 6, 2, 1};
    printf("%d",MaxProduct(array));
    return 0;
}