#include <stdio.h>
int main()
{
	int H, D, F, day;
	float U, sum, f;

	while(1)
	{
		scanf("%d %f %d %d", &H, &U, &D, &F);
		if(H == 0)
        {
            break;
        }
		day = 1;
		sum = 0;
		f = U*F/100;
		while(1)
        {
			sum += U;
			if(U > 0)
			{
			    U -= f;
			}
			if(sum > H)
            {
                break;
            }
			sum -= D;
			if(sum < 0)
            {
                break;
            }
			day++;
		}
		if(sum < 0)
        {
            printf("failure on day %d\n", day);
        }
		else
        {
            printf("success on day %d\n", day);
        }

	}
}
