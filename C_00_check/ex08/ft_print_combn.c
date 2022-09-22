#include <unistd.h>

void recu(int i, int m, int n)
{
	for (int a = i; a <= m; a++)
    {
		if (n != 9)
        {
		    recu(a, int m, n+1);
		}
	}
}

void ft_print_combn(int n)
{
    recu(0, 10 - n, n);

    for (int a = 0; a <= 7; a++)
    {
        for (int b = a + 1; b <= 8; b++)
        {
            for (int c = b + 1; c <= 9; c++)
            {
                char ch = '0' + a;

                write(1, &ch, 1);
                ch = '0' + b;
                write(1, &ch, 1);
                ch = '0' + c;
                write(1, &ch, 1);

                if (a != 7 || b != 8 || c != 9)
                {
                    ch = ',';
                    write(1, &ch, 1);
                    ch = ' ';
                    write(1, &ch, 1); 
                }
            }
        }
    }
}