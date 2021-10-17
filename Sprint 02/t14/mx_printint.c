void mx_printint(int n)
{
    int number = n;
    int count = 0; 
    int a[count];
    while(number != 0)
    {
        temp /= 10;
        count++;
    }
    for(int i = 0; i < count; i++)
    {
        a[i] = n%10 + 48;
        n /= 10;
    }
    for(int k = count; k >= 0; k--)
    {
        mx_printchar(a[i]);
    }
    mx_printchar('\n');
}