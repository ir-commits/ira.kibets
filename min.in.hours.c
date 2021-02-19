#include <stdio.h>

int main() 
{
	int m, h, minute;
	printf("Input minutes: ");
	scanf("%d", &m);
	
	h = (m/60); 
	minute = m%60;
	
	printf("H - %d\n and minutes = %d", h, minute );
	
	return 0;
}

