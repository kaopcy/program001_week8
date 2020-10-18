#include<stdio.h>
void binary_func(int);
int decimal, binary_number, i = 0;
int binary[128];

int main()
{
    bool isPrime = true;
    printf("Enter Decimal Number : ");
    scanf_s("%d", &decimal);
    binary_func(decimal);
    if (decimal == 0 || decimal == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= decimal / 2; ++i) {
            if (decimal % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        printf("\nnumber %d is prime", decimal);
    else if (!isPrime)
        printf("\nnumber %d is not prime", decimal);

}
void binary_func(int decimal)
{
    while (decimal != 0)
    {
        binary_number = decimal % 2;
        binary[i] = binary_number;
        decimal /= 2;
        i++;
    }

    printf("Binary : ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}