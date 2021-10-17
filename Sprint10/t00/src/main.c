#include "header.h"
#include <stdlib.h>
#include <stdio.h>
void mx_printchar(char c);

int main()
{
    int fd = 0;
    ssize_t ref;
    char ch;
    if (argc != 2) {
        write(2, "usage: ./read_file [file_path]\n", 31);
        return -1;
    }
    fd = fopen(argv, fd);
    while ((ref = read(fd, &ch, 1)) > 0) {
        write(1, &ch, 1);
        if (ref < 0) {
            write(2, "error\n", 6);
            return -1;
        }
    }
    close(fd);
    return 0;
    

}
