#include<stdio.h>
#include<math.h>

int main()
{
	float a = 1, b = 4;
	float h = (b - a) / 1000;
	float s = 0;
	float i = 0;
	for (i = h; i <= b - a; i += h)
	{
		s = s + ((a + i - h) * (a + i - h) + (a + i) * (a + i)) * h / 2;
	}
	printf("Dien Tich = %f", s);

}