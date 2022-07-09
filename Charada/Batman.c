#include <stdio.h>

int main()
{
	unsigned int num;
	char numEmHexa[10];
	char charHexa[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
			     '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	printf("Entre com o numero: ");
	scanf("%d", &num);

	numEmHexa[0] = charHexa[ ((num & 0xF0) >> 4) ];
	numEmHexa[1] = charHexa[ (num & 0x0F) ];
	numEmHexa[2] = '\0';

	printf("Numero em hexa: %s\n", numEmHexa);
}