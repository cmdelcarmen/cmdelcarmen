#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("#\n");
    int idx = 0, idx2 = 0, idx3 = 0, count = 2;
    char **two_d = NULL, *s = "Hello World";

    for (idx = 0; s[idx] != '\0'; idx++)
    {
        if (s[idx] == ' ')
            count++;
    }
	printf("AFTER 1ST LOOP\n");

	two_d = malloc(sizeof(two_d) * (count));
	printf("AFTER MALLOS\n");
	putchar(97);
	for (idx = 0; idx < count; idx++)
    {
        two_d[idx] = malloc(sizeof(char) * 15);
		printf("why me\n");
    }
	printf("AFTER SECOND LOOP\n");
	putchar(97);
	printf("AFTER PUTCHAR LINE 27");
	for (idx = 0; s[idx3] != '\0'; idx++)
    {
		printf("HELPPPPPPPPPPPPPPPPPPPPPPP");
       for (idx2 = 0; s[idx3] != '\0' && s[idx3] != 32; idx2++);
        {
            two_d[idx][idx2] = s[idx3];
            idx3++;
			printf("inside the inner loop\n");
        }
        idx3++;
        two_d[idx][idx2] = '\0';
		printf("INSIDE LOOP\n");
    }
    two_d[idx] = NULL;

    return (0);
}
