#include <stdio.h>
#include <ctype.h>
#include "./test.h"
#include "../ft_isalpha.c"
#include "../ft_islower.c"
#include "../ft_isupper.c"

void test(char *str){
	int i = 0;
	while (str[i])
	{
		int rtn = ft_isalpha(str[i]);
		int rtn_org = isalpha(str[i]);
		(rtn_org == 1) ? printf(BOLD) : 0;
		(rtn == rtn_org) ? printf(GREEN) : printf(RED);
		printf("%c"RESET, str[i]);
		i++;
	}
	printf("\n");
}

void test_int(int num){
	int rtn = ft_isalpha(num);
	int rtn_org = isalpha(num);
	(rtn_org == 1) ? printf(BOLD) : 0;
	(rtn == rtn_org) ? printf(GREEN) : printf(RED);
	printf("%d\n"RESET, num);
}

int	main(void){
	printf("usual case:");
	char *test_case = " !\"#%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~"; // \a\b\f\n\r\t\v
	test(test_case);
	printf("unusual case:\n");
	int invalid_case[] = {-1, 65, 256, 1000};
	int i = 0;
	while (i < 4){
		test_int(invalid_case[i]);
		i++;
	}
}
