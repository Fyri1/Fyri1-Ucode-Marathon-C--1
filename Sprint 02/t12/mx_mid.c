int mx_mid(int a, int b, int c)
{
    if(a > b && c > b)
    {
        if(a >= c)
        {
            return c;
        }
        else
        {
            return a;
        }
    }
    else if(b > a && c > a)
    {
        if(b >= c)
        {
            return c;
        }
        else
        {
            return a;
        }
    }
    else
    {
        return b;
    }
}
