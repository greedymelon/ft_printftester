CC = gcc
RM = rm -f
## path of ft_printf directory
PATHFT=../
ifdef ISBONUS
else
ISBONUS=1
endif

all : compare

compare : compile
	@./compare
compile: testtest
	@${CC} -D BONUS_F=${ISBONUS} -o compare last.c get_next_line_bonus.c get_next_line_utils_bonus.c

testtest : program
	@./a.out > ft_printf.txt
program : ../libftprintf.a
	@gcc -D BONUS_F=${ISBONUS} main.c ../libftprintf.a
../libftprintf.a :
	@make -C ../

clean :
	@${RM} ./a.out compare ft_printf.txt; make fclean -C ${PATHFT}

bonus : libftbon
	@ISBONUS=0 make all

libftbon :
	make bonus -C ${PATHFT}

.PHONY: all clean bonus 