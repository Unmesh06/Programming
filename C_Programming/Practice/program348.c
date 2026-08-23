#include<stdio.h>

typedef unsigned int UINT;

//Position : 3 and 8
int main()
{
    UINT iNo = 0, iResult = 0, iMask = 0; 
    UINT iMask1 = 0x0000004; 
    UINT iMask2 = 0X00000080;

    printf("Enter Number : ");
    scanf("%d",&iNo);

    iMask = iMask1 | iMask2;

    iResult = iNo ^ iMask;

    printf("Updated Number : %d\n",iResult);
    
    return 0;
}