#include <stdio.h>
#include <cs50.h>

int main(void)
{
	int blocks = 0;

	do {
		printf("height:");
		blocks = get_int();
        if (blocks == 0)
        {
            return 0;
        }
	} while (blocks < 1 || blocks > 23);

	for(int i = 0; i < blocks; i++)
	{
        for(int a = 0; a < blocks-i-1; a++)
        {
            printf("%s", " ");
        }
		for(int b = 0; b < i+2; b++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}