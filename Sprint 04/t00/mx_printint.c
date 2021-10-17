void mx_printchar(char c);

void mx_printint(int n)
{
    int number = n;
    int count = 0; 
    while(number != '\0')
    {
        number = number / 10;
        count++;
    }
    int a[count];
    for(int i = count; n != '\0'; i--)
    {
        if(n < 0)
        {
            n *= -1;
        }
        a[i] = n % 10 + 48;
        n = n / 10;
    }
    for(int k = 0; k <= count; k++)
    {
        mx_printchar(a[k]);
    }
    mx_printchar('\n');
}

