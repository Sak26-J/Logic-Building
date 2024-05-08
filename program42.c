/*
WRITE A PROGRAM TO CHECK WHETHER THE 
GIVEN NUMBER IS PRIME OR NOT.

*/




#include<stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0, iCount = 0;

    if(iNo < 0)  //Updator
    {
        iNo = -iNo; 
    }

    for(iCnt =2; iCnt <= (iNo/2); iCnt++)
    {
        if ((iNo % iCnt) == 0) 
        {
            iCount++;
        
        }
        if(iCount == 0)
        {
            return true;
        }
        else 
        {
            return false;
        }

    }

}

int main()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is a prime number \n",iValue);
    }
    else {
    printf("%d is not a prime number \n",iValue);
    }

    return 0;
}