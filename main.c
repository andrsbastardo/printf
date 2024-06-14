
#include "ft_printf.h"

int	main()
{
	char	c;
	int		n;
	char 	*b;
	int		hex;

	c = 'a';
	n = 'T';
	b = NULL;
	hex = 95;
	ft_printf(" Hola esto es una %i%i\n  Esto es un %i\n Imprime la string %s\n Cuya dirección de puntero es %p\n", c,c, n, b, b);
	printf (" Letra esperada %c%c\n Digito esperado %d\n string esperada %s\n Dirección esperada %p\n\n", c,c, n, b, b);
	ft_printf(" Imprimimos el número como unsigned %u\n", INT_MIN);
	printf(" Numero unsigned esperado %u\n\n",INT_MIN);
	ft_printf(" Imprimimos el número 16 como hexadecimal.Numero recibido %x \n", hex);
	ft_printf(" Imprimimos el número 16 como hexadecimal.Numero recibido %X \n", hex);
	printf(" Resultados hexadecimales esperados %x, %X\n\n", hex, hex);
	ft_printf("%d\n",ft_printf(" La longuitud de la string es\n"));
	printf("%d\n",printf(" La longuitud de la string es\n"));
} 