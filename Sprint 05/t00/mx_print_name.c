int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);
void mx_printint(int num);

int main( int argc, char *argv[] )
{
  mx_printstr(argv[0]);
  mx_printstr("\n");
  mx_printint(argc);
  mx_printstr("\n");

}
