#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h> 
#include "get_next_line_bonus.h" 

int main()
{
    int fd_printf;
    if (BONUS_F == 0)
        fd_printf = open("printfbonus.txt", 'r');
    else
        fd_printf = open("printf.txt", 'r');
    
    int ftprintf = open("ft_printf.txt", 'r');
    char *pr = get_next_line(fd_printf);
    char *ftpr= get_next_line(ftprintf);
    int i = 0;
    while (pr != NULL)
    {
        if (!strncmp(pr, "^", 1))
        {
            sleep(1);
            printf("\n\n\n%s\n", pr);
            i = 0;
        }
        if (strcmp(pr, ftpr))
            printf("\n%d\nright: [%s]\nwrong: [%s]\n",i, pr, ftpr);
        else 
            printf("OK ");
        free(pr);
        free(ftpr);
        pr = get_next_line(fd_printf);
        ftpr = get_next_line(ftprintf);
        i++;
    }
    printf("\n\n");
    free(ftpr);
    close(fd_printf);
    close(ftprintf);
    return (0);
}

    


