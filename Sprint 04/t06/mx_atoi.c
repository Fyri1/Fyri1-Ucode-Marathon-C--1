bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *str)
{

    int flag = 0;

    int n = 0;
    int neg = 1;
    int i = 0;
    if(str[0] == '-')
    {
        neg = -1;
        i++;
    }
    for(; str[i] != '\0'; i++)
    {
        if(mx_isspace(str[i]))
        {
            flag = 1;
            break;
        }
        else if(!mx_isdigit(str[i]))
        {
            flag = 1;
            break;
        }
        else if(str[i] == '-')
        {
            flag = 1;
            break;
        }

        n *= 10;
        n += str[i];
        n -= '0';
        
    }
    if(flag == 0)
    {
        return neg * n;
    }
    else
    {
        return 0;
    }
}

