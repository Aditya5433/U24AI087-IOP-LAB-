#include <stdio.h>

int main()
{
    int T;

    printf("Enter the value of T\n");
    scanf("%d", &T);
    int num[T];

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &num[i]);
    }
    
    for (int j = 0; j < T; j++)
    {
        int original_no, digit, devisers = 0;
        original_no = num[j];
        while (original_no != 0)
        {
            digit = original_no % 10;
            if (num[j] % digit == 0)
            {
                devisers = devisers + 1; 
            }
            original_no = original_no / 10;
        }
        printf("%d\n", devisers);
    }
    
    return 0;
}