#include <locale.h>

#include <stdio.h>

void name()

{
	puts("* * * * * * * * * * * * * * * * * * * * * *");
	puts("*                                         *");
	puts("* тема: Разработка консольного приложения *");
	puts("*                                         *");
	puts("*    Выполнил Литуновский М. Д.           *");
	puts("*                                         *");
	puts("* * * * * * * * * * * * * * * * * * * * * *");

}

void date()
{
	puts(" __          __   __     __   __ ");
	puts("   |    |   |  | |  |   |  | |  |");
	puts(" --     |   |  | |--|   |  | |--|");
	puts(" __|    | . |__| |__| . |__| |__|");
}

void main()
{
	setlocale(LC_ALL, "RUS");
	getchar();
	name();
	date();
}