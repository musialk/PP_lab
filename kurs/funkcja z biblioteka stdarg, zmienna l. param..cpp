#include<stdarg.h>

int pomnoz(int pierwszy)
{
	va_list arg;
	int iloczyn=1, t;
	va_start (arg, pierwszy);
	
	for(t=pierwszy; t>=0; t=va_arg(arg, int))
	{
		iloczyn *= t;
	}
	va_end (arg);
	return iloczyn;
}
