#include<stdio.h>

typedef unsigned int UINT;

//Position : 3 and 7
int main()
{
    UINT iNo = 0, iMask = 0x00000044, iResult = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;

    printf("Updated Number : %d\n",iResult);
    
    return 0;
}