#include <stdio.h>

int max(int num1,int num2)
{

    int result;
    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }
    return result;
}

int main()
{

    int num1, num2;
    printf("Enter first name : ");
    scanf("%d",&num1);

    printf("Enter Second name : ");
    scanf("%d",&num2);

    int result = max(num1,num2);
    printf("Result : %d",result);

}