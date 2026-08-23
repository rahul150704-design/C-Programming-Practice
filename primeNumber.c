#include <stdio.h>

#include <stdio.h>

int main()
{
    int n;
    int a = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    // 1 is neither prime nor composite
    if(n == 1)
    {
        printf("1 is neither prime nor composite");
    }
    else
    {
        // Check divisibility
        for(int i = 2; i <= n - 1; i++)
        {
            if(n % i == 0)
            {
                a = 1;
                break;
            }
        }

        // If divisor was found
        if(a == 1)
        {
            printf("The given number is composite");
        }
        else
        {
            printf("The given number is prime");
        }
    }

    return 0;
}
