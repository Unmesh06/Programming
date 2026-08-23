#include<stdio.h>

typedef unsigned int UINT;

//Position : 3 and 8
int main()
{
    UINT iNo = 0, iMask = 0x00000084, iResult = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;

    printf("Updated Number : %d\n",iResult);
    
    return 0;
}