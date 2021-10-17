int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);
char *mx_strchr(const char *s, int c);

int main( int argc, char *argv[] )
{
    char *temp=0;
    argc=1;
    for (int i =  mx_strlen(argv[0]); i>=0 ; i--)
    {
        if ( mx_strchr(&argv[0][i],'/'))
        {
            temp =&argv[0][i]; 
            break;
        }
    }
    mx_printstr(temp+2);
    mx_printstr("\n");
}
