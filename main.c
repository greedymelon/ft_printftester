
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line_bonus.h"
#if BONUS_F == 1
# include "../ft_printf.h" 
#else
# include "../ft_printf_bonus.h" 
# endif

void flag_d(int is_mandatory)
{
    int a;
    if (is_mandatory)
    {
        int n = 0;
        a = ft_printf("%d %i; \n",n, n);
        ft_printf("%d\n", a);

        n = -1;
        a = ft_printf("%d %i; \n",n, n);
        ft_printf("%d\n", a);

        n = 2147483647;
        a = ft_printf("%d %i; \n",n, n);
        ft_printf("%d\n", a);

        n = -2147483648;
        a = ft_printf("%d %i; \n",n, n);
        ft_printf("%d\n", a);

        n = 44;
        a = ft_printf("%d%i; \n",n, n);
        ft_printf("%d\n", a);

    }
    else
    {
        int d = 0;
        a = ft_printf("*1*%#.d, %.0d, %.1i, %04d, \n%-04d, %04.2d, %04.d, %04.0d, \n%-0-04.0d, %#-0-04.1d % +-0- +04.1d % -0- 04.1d \n% 0 04.1d % 0#04.1i % +#4.1d %5d\n", d, d, d, d, d, d, d, d, d, d, d, d, d, d, d, d);
        ft_printf("%d\n", a);

        d = -1;
        a = ft_printf("*1*%#.d, %.0d, %.1i, %04d, \n%-04d, %04.2d, %04.d, %04.0d, \n%-0-04.0d, %#-0-04.1d % +-0- +04.1d % -0- 04.1d \n% 0 04.1d % 0#04.1i % +#4.1d %5.4.5+d\n", d, d, d, d, d, d, d, d, d, d, d, d, d, d, d, d);
        ft_printf("%d\n", a);

        d = 2147483647;
        a = ft_printf("*1*%#.d, %.0d, %.1i, %04d, \n%-04d, %04.2d, %014.d, %04.0d, \n%-0-04.0d, %#-0-014.12d % +-0- +04.11d % -0- 04.1d \n% 0 04.1d % 0#014.1i % +#13.12d %5d\n", d, d, d, d, d, d, d, d, d, d, d, d, d, d, d, d);
        ft_printf("%d\n", a);

        d = -2147483648;
        a = ft_printf("*1*%#.d, %.0d, %.1i, %04d, \n%-04d, %04.2d, %014.d, %04.0d, \n%-0-04.0d,%#-0-014.12d % +-0- +04.11d % -0- 04.1d \n% 0 04.1d % 0#014.1i % +#13.12d %5d\n", d, d, d, d, d, d, d, d, d, d, d, d, d, d, d, d);
        ft_printf("%d\n", a);
        //
        d = 404;
        a = ft_printf("*1*%#.d, %.0d, %.1i, %04d, \n%-04d, %04.2d, %04.d, %04.0d, \n%-0-04.0d, %#-0-04.1d % +-0- +04.1d % -0- 04.1d \n% 0 04.1d % 0#04.1i % +#4.1d %5d\n", d, d, d, d, d, d, d, d, d, d, d, d, d, d, d, d);
        ft_printf("%d\n", a);
    }
}

void   noflag()
{
    int a = ft_printf("difidsgjijgiodfgzlgosdg\n");
    ft_printf("%d\n", a);
    a = ft_printf("difidsgjijgiodfgzlgosdg");
    ft_printf("%d\n", a);
}

void flag_c(int is_mandatory)
{
    int a;
    char c = 'c';
    if (is_mandatory)
    {
        a = ft_printf("%c %c\n", c , c);
        ft_printf("%d\n", a);

        a = ft_printf("%c%c%c%c\n", c , c, c, c);
        ft_printf("%d\n", a);
    }
    else
    {
        a = ft_printf("%.c, %.0c, %.8c, %011c, \n%-04c, %04.12c, %04.c,\n%04.0c, %-0-04.0c, %-0-04.1c, % +-0- +04.1c, \n% -0- 04.1c % 0 04.1c % 0#04.1c % +#4.1c %5c\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
        ft_printf("%d\n", a);
    } 
}

void    flag_u(int is_mandatory)
{
    int a;
    if (is_mandatory)
    {
        unsigned int n = 0;
        a = ft_printf("%u\n", n);
        ft_printf("%d\n", a);
        //

        n = 1;
        a = ft_printf("%u%u\n", n, n);
        ft_printf("%d\n", a);

        n = 2147483647;
        a = ft_printf("%u%u\n", n, n);
        ft_printf("%d\n", a);

        n = 4294967295;
        a = ft_printf("%u %u\n", n, n);;
        ft_printf("%d\n", a);

        n = 44;
        a = ft_printf("%u %u%u %u\n", n, n, n, n);
        ft_printf("%d\n", a);
    }
    else
    {
        unsigned int u = 4294967295;
        a = ft_printf("%.u, %.0u, %.1u, %011u, \n%-04u, %04.12u, %04.u, %04.0u, \n%-0-04.0u %-0-04.1u % +-0- +04.1u % -0- 04.1u % 0 04.1u \n% 0#04.1u % +#4.1u %5u\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
        ft_printf("%d\n", a);

        u = 1;
        a = ft_printf("%.u, %.0u, %.1u, %011u, \n%-04u, %04.12u, %04.u, %04.0u, \n%-0-04.0u, %-0-04.1u, % +-0- +04.1u, % -0- 04.1u % 0 04.1u \n% 0#04.1u % +#4.1u %5u\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
        ft_printf("%d\n", a);

        u = 0;
        a = ft_printf("%.u, %.0u, %.1u, %011u, \n%-04u, %04.12u, %04.u, %04.0u, \n%-0-04.0u, %-0-04.1u, % +-0- +04.1u, % -0- 04.1u % 0 04.1u \n% 0#04.1u % +#4.1u %5u\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
        ft_printf("%d\n", a);
    }
}

void    flag_x (int is_mandatory)
{
    int a;
    unsigned int u;
    if (is_mandatory)
    {
        u = 0;
        a = ft_printf("%x %X\n", u, u);
        ft_printf("%d\n", a);

        u = 1;
        a = ft_printf("%x %X\n", u, u);
        ft_printf("%d\n", a);

        u = 42;
        a = ft_printf("%x %X\n", u, u);
        ft_printf("%d\n", a);

        u = 4294967295;
        a = ft_printf("%x %X\n", u, u);
        ft_printf("%d\n", a);
        //
    }
    else
    {
        u = 4294967295;
        a = ft_printf("%.x, %#.0x, %.1x, %011x, \n%-04x, %04.12x, %04.x, %04.0x, \n%-0-04.0x %-0-04.1x % +-0- +04.14x % -0- 04.1x \n% 0 04.1x % 0#04.1x % +#4.1x %9x\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
        ft_printf("%d\n", a);

        u = 0;
        a = ft_printf("%.x, %#.0x, %.1x, %011x, \n%-04x, %04.12x, %04.x, %04.0x, \n%-0-04.0x %-0-04.1x % +-0- +04.14x % -0- 04.1x \n% 0 04.1x % 0#04.1x % +#4.1x %9x\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
        ft_printf("%d\n", a);

        u = 1;
        a = ft_printf("%.x, %#.0x, %.1x, %011x, \n%-04x, %04.12x, %04.x, %04.0x, \n%-0-04.0x %-0-04.1x % +-0- +04.14x % -0- 04.1x \n% 0 04.1x % 0#04.1x % +#4.1x %9x\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
        ft_printf("%d\n", a);

       
        u = 42;
        a = ft_printf("%.x, %#.0x, %.1x, %011x, \n%-04x, %04.12x, %04.x, %04.0x, %-0-04.0x \n%-0-04.1x % +-0- +04.14x % -0- 04.1x \n% 0 04.1x % 0#04.1x % +#4.1x %9x\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
        ft_printf("%d\n", a);
    }
}

void    flag_X (int is_mandatory)
{
    int a;
    unsigned int u;
    if (!is_mandatory)
    {
        u = 4294967295;
        a = ft_printf("%.X, %#.0X, %#1x, %011X, \n%#-04X, %04.12X, %04.X, %#04.0X, \n%-0-04.0X %-0-04.1X % +-0- +04.14X % -0- 04.1X \n% 0 04.1X % 0#04.1X % +#4.1X %9X\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
        ft_printf("%d\n", a);


        u = 0;
        a = ft_printf("%.X, %#.0X, %#1x, %011X, \n%#-04X, %04.11.12X, %04.X, %#04.0X, \n%-0-04.0-X %-0-04.1X % +-0- +04.14+X % -0- 04.1X \n% 0 04.1X % 0#04.1X % +#4.1X %9X\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
        ft_printf("%d\n", a);
    
        u = 1;
        a = ft_printf("%.X, %#.0X, %#1x, %011X, \n%#-04X, %04.11.12X, %04.X, %#04.0X, \n%-0-04.0-X %-0-04.1X % +-0- +04.14+X % -0- 04.1X \n% 0 04.1X % 0#04.1X % +#4.1X %9X\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
        ft_printf("%d\n", a);

        u = 42;
        a = ft_printf("%.X, %#.0X, %#1x, %011X, \n%#-04X, %04.12X, %04.X, %#04.0X, \n%-0-04.0X %-0-04.1X % +-0- +04.14X % -0- 04.1X \n% 0 04.1X % 0#04.1X % +#4.1X %9X\n", u, u, u, u, u, u, u, u, u, u, u, u, u, u, u, u);
        ft_printf("%d\n", a);

    }
}

void flag_s (int is_mandatory)
{

    int a;
    if (is_mandatory)
    {
        char *s = NULL;
        a = ft_printf("%s %s\n", "a" , s);
        ft_printf("%d\n", a);

        a = ft_printf("%s %s\n", "burpis" , "");
        ft_printf("%d\n", a);

    }
    else
    {
        char *s = NULL;
        a = ft_printf("%.s, %.0s, %.8s, %011s, %-04s, \n%04.12s, %04.s, %04.0s, %-0-04.0s, %-0-04.1s, \n% +-0- +04.1s, % -0- 04.1s % 0 04.1s % 0#04.1s % +#4.1s %5s\n", s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s);
        ft_printf("%d\n", a);

        s = strdup("s");
        a = ft_printf("%.s, %.0s, %.8s, %011s, %-04s, \n%04.12s, %04.s, %04.0s, %-0-04.0s, %-0-04.1s, \n% +-0- +04.1s, % -0- 04.1s % 0 04.1s % 0#04.1s % +#4.1s %5s\n", s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s);
        ft_printf("%d\n", a);
        free(s);

        s = strdup("");
        a = ft_printf("%.s, %.0s, %.8s, %011s, %-04s, \n%04.12s, %04.s, %04.0s, %-0-04.0s, %-0-04.1s, \n% +-0- +04.1s, % -0- 04.1s % 0 04.1s % 0#04.1s % +#4.1s %5s\n", s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s);
        ft_printf("%d\n", a);
        free(s);

        s = strdup("effrefjrehwirjigjirtjgioermgotjoggjojiijotrjgoirjgoetjgrjgoejtrgoejtjirtjgojrtorjgeo");
        a = ft_printf("%.s, %.0s, %.8s, %011s, %-04s, \n%04.12s, %04.s, %04.0s, %-0-04.0s, %-0-04.1s, \n% +-0- +04.1s, % -0- 04.1s % 0 04.1s \n% 0#04.1s % +#4.1s %5s\n", s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s);
        ft_printf("%d\n", a);
        free(s);
    }
}

void    flag_p(int is_mandatory)
{
    int a;
    char *f = (void *)4294967295;
    if(is_mandatory)
    {
        char *s = NULL;
        a = ft_printf("%% %p%p \n",f, f);
        ft_printf("%d\n", a);

        a = ft_printf("%% %p%p \n",s, s);
        ft_printf("%d\n", a);

    }
    else
    {
        char *s = NULL;
        a = ft_printf("%.p, %.0p, %.8p, %011p, \n%-04p, %04.12p, %04.p, \n%04.0p, %-0-04.0p, %-0-04.1p, % +-0- +04.1p, % -0- 04.1p \n% 0 04.1p % 0#04.1p % +#4.1p %5p\n", s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s);
        ft_printf("%d\n", a);

        s = f;
        a = ft_printf("%.p, %.0p, %.8p, %011p, \n%-04p, %04.12p, %04.p, \n%04.0p, %-0-04.0p, %-0-04.1p, % +-0- +04.1p, \n% -0- 04.1p % 0 04.1p % 0#04.1p % +#4.1p %5p\n", s, s, s, s, s, s, s, s, s, s, s, s, s, s, s, s);
        ft_printf("%d\n", a);
    }
}

void flag_perc()
{
    int a;
    a = ft_printf("%% %%%% %%%%\n");
    ft_printf("%d\n", a);
}

void mix_test()
{
    int a;
    char *f = (void *)4294967295;
    a = ft_printf("%c%%%u%i%s%%%x%X%p%d\n", 'f' , 33, 44,"abc", 123, 222, f, 23);
    ft_printf("%d\n", a);
}

void wrong_flag(int is_mandatory)
{
    int a;
    if(is_mandatory)
    {
        a = ft_printf("%w %w\n", 'f', '<');
        ft_printf("%d\n", a);
    }
    else
    {
        a = ft_printf("%#3443.w %+-  0+#34.2w\n", 'f', '<');
        ft_printf("%d\n", a);
        a = ft_printf("%#0---++--+++##  +0. %+-   0000  0+#34.2w\n %04.w %0 .w %0 #.3w", 'f', '<');
        ft_printf("%d\n", a);
    }
}

void crash()
{
    ft_printf("%c", 42949672953);
}

int main()
{
    int mandatory = BONUS_F;
 
    ft_printf("^no flag\n");
    noflag();

    ft_printf("^flag d & i\n");
    flag_d(mandatory);

    ft_printf("^flag c\n");
    flag_c(mandatory);

    ft_printf("^flag u\n");
    flag_u(mandatory);

    if (mandatory)
        ft_printf("^flag x & X\n");
    else
        ft_printf("^flag  x\n");
    flag_x(mandatory);
    if (!mandatory)
    {
        ft_printf("^flag  X\n");
        flag_X(mandatory);
    }

    ft_printf("^flag p\n\n");
    flag_p(mandatory);

    ft_printf("^flag s\n");
    flag_s(mandatory);

    ft_printf("^flag %%\n");
    flag_perc(mandatory);

    ft_printf("^mix test\n");
    mix_test();

    ft_printf("^wrong flag \n");
    wrong_flag(mandatory);

    ft_printf("^no output\n");
    crash();
    return (0);
}
