#include<stdio.h>

typedef unsigned int UINT;

//Position : 21 and 27
int main()
{
    UINT iNo = 0, iMask = 0x04100000, iResult = 0;

    printf("Enter Number : ");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;

    printf("Updated Number : %d\n",iResult);
    
    return 0;
}