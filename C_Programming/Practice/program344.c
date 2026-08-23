#include<stdio.h>

typedef unsigned int UINT;

//Position : 9 and 17
int main()
{
    UINT iNo = 0, iMask = 0x00010100, iResult = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;

    printf("Updated Number : %d\n",iResult);
    
    return 0;
}