#include <string.h>
#include <stdio.h>
#include "./Libft/libft.h"	
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc < 3)
		{
			printf("need 2 arg\n");
			return (0);
		}
	char *s1;
	char *s2;
	char *set;
	int i;
	int lens2;
	int lens1;

	lens1 = ft_strlen(argv[1]);

//
	printf("*****ft_memset*****\n");
	s1 = ft_strdup(argv[1]);
	set = memset(s1, '*', 2);
	printf("%s\n", set);

	set =	ft_memset(s1, '*', 2);
	s1 = ft_strdup(argv[1]);
	printf("%s\n", set);
	free (s1);



	
	printf("\n\n*****ft_bzero*****\n");
	i = 0;
	s1 = ft_strdup(argv[1]);
	bzero(s1, 3);
	while(i < lens1)
	{
		printf("%c", s1[i]);
		i++;
	}
	printf ("\n");

	i = 0;
	s1 = ft_strdup(argv[1]);
	ft_bzero(s1, 3);
	while(i < lens1)
	{
		printf("%c", s1[i]);
		i++;
	}
	printf ("\n");
	free (s1);



	printf("\n\n*****ft_memcpy*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = memcpy(s2, s1, 3);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);
	
	printf("\n");

	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_memcpy(s2, s1, 3);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);
	free (s1);
	free (s2);

/*
	
	printf("\n\n*****ft_memccpy*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = memccpy(s2, s1, 'o',20);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);
	
	printf("\n");

	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_memccpy(s2, s1, 'o',20);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);
	free (s1);
	free (s2);
 	*/

	
	printf("\n\n*****ft_memmove*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = memmove(s2, s1, 3);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);
	
	printf("\n");

	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_memmove(s2, s1, 3);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);
	free (s1);
	free (s2);
	


	printf("\n\n*****ft_memchr*****\n");
	s1 = ft_strdup(argv[1]);
	set = memchr(s1, 'u', 20);
	printf("%s\n", s1);
	printf("%s\n", set);

	printf("\n");

	s1 = ft_strdup(argv[1]);
	set = ft_memchr(s1, 'u', 20);
	printf("%s\n", s1);
	printf("%s\n", set);



	printf("\n\n*****ft_memcmp*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	i = memcmp(s1, s2, 1);
	printf ("%d\n",i);

		printf("\n");

	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	i = ft_memcmp(s1, s2, 1);
	printf ("%d\n",i);



	printf("\n\n*****ft_strcpy*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = strcpy(s2, s1);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);

		printf("\n");

	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_strcpy(s2, s1);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);


	printf("\n\n*****ft_strncpy*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = strncpy(s2, s1, 2);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);

		printf("\n");
		
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_strncpy(s2, s1, 2);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);



	printf("\n\n*****ft_strcat*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = strcat(s2, s1);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);

		printf("\n");
		
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_strcat(s2, s1);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);




	printf("\n\n*****ft_strncat*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = strncat(s2, s1, 3);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);

		printf("\n");
		
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_strncat(s2, s1, 3);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);



	printf("\n\n*****ft_strlcat*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	//i = strlcat(s2, s1, 4);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", i);

	printf("\n");

	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	i = ft_strlcat(s2, s1, 4);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", i);



	
	printf("\n\n*****ft_strchr*****\n");
	s1 = strdup(argv[1]);
	set = strchr(s1, 'd');
	printf("%s\n", s1);
	printf("%s\n", set);

		printf("\n");

	s1 = strdup(argv[1]);
	//set = ft_strchr(s1, 'd');
	printf("%s\n", s1);
	printf("%s\n", set);
	


	printf("\n\n*****ft_strrchr*****\n");
	s1 = strdup(argv[1]);
	set = strrchr(s1, 'd');
	printf("%s\n", s1);
	printf("%s\n", set);

		printf("\n");

	s1 = strdup(argv[1]);
	set = ft_strrchr(s1, 'd');
	printf("%s\n", s1);
	printf("%s\n", set);



	printf("\n\n*****ft_strstr*****\n");
	s1 = strdup(argv[1]);
	s2 = strdup(argv[2]);
	set = strstr(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", set);

		printf("\n");

	s1 = strdup(argv[1]);
	s2 = strdup(argv[2]);
	set = ft_strstr(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", set);




	printf("\n\n*****ft_strstr*****\n");
	s1 = strdup(argv[1]);
	s2 = strdup(argv[2]);
	//set = strnstr(s1, s2, 4);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", set);

		printf("\n");

	s1 = strdup(argv[1]);
	s2 = strdup(argv[2]);
	set = ft_strnstr(s1, s2, 4);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", set);
//
	printf("\n\n*****ft_atoi*****\n");
	printf("%d\n", atoi(argv[1]));

		printf("\n");

	printf("%d\n", ft_atoi(argv[1]));




	printf("\n\n*****ft_memalloc*****\n");
	s1 = (char *)ft_memalloc(0);
	printf("%s\n", s1);


	printf("\n\n*****ft_strnew*****\n");
	s1 = ft_strnew(10);
	printf("%s\n", s1);

	printf("\n\n*****ft_striter*****\n");
	s1 = ft_strdup(argv[1]);
	ft_striter(s1, ft_strclr);
	printf("%s\n", s1);

	printf("\n\n*****ft_strsub*****\n");
	s1 = ft_strdup(argv[1]);
	i = 3;
	set = ft_strsub(s1, i, ft_strlen(s1) - i + 1); //len = len + '\0' ?
	printf("%s\n", set);

	printf("\n\n*****ft_strjoin*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_strjoin(s1, s2);
	printf("%s\n", set);

	printf("\n\n*****ft_strtrim*****\n");
	s1 = ft_strdup(argv[1]);
	lens1 = 0;
	lens2 = 0;
	i = ft_strtrim_len(s1, &lens1, &lens2);
	printf("%d , %d\n",lens1, lens2);
	set = ft_strtrim(s1);
	printf("%s\n", set);



	ft_putendl("\n\n*****ft_strsplit*****");
	s1 = ft_strdup(argv[1]);
	lens1 = ft_cmpw(s1, '|');
	printf(":%d:\n", lens1);
	ft_print_tab(ft_strsplit(s1, '|'));


	ft_putstr("\n\n*****ft_itoa*****\n");
		printf("%d\n",ft_sizint(400));
		printf("%d , %d\n",-58 / 10, ABS(-58 / 10));
		printf("%s\n", ft_itoa(10));


	ft_putendl("\n\n*****ft_strsplit*****");
	ft_putchar_fd('c', 2);

	ft_putendl("\n\n*****ft_lst*****");
	t_list *maillon;
	t_list *maillon1;
	t_list *maillon2;
	t_list *maillon3;
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	maillon = ft_lstnew(s1, ft_strlen(s1) + 1);
	maillon1 = ft_lstnew(s2, ft_strlen(s1) + 1);
	maillon2 = ft_lstnew("cdr", ft_strlen("cdr") + 1);
	maillon3 = ft_lstnew("lol", ft_strlen("lol") + 1);
	ft_lstadd(&maillon, maillon1);
	ft_print_elem(maillon1);
	ft_putendl("");
	ft_lstadd_b(&maillon1, maillon2);
	ft_lstadd_b(&maillon1, maillon3);
	ft_print_elem(maillon1);
	ft_putendl("");
	ft_putnbr(ft_lstsize(maillon1));
	ft_putendl("");
	ft_print_elem(maillon1);
	ft_putendl("");


	return (0);
}