#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

int main ()
{
	int h, m, s;
	for (h=0;h<24; h++)
	{
		for (m=0;m<60;m++)
		{
			for (s=0;s<60;s++)
			{
				printf("%i:%i:%i\n", h, m, s);
				sleep(1000);
			}
		}
	}
}
