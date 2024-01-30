#include "main.h"
/**
  * spec_f - find relevant function for specifier conversion
  * @m: specifier
  *
  * Return: function pointer (int (*)(va_list *)) type. (success)
  *         NULL, if specifier not found
  */
int (*spec_f(const char m))(va_list *)
{
	int i;
	char c;
	con_t sp[] = {
		{'d', print_int},
		{0, NULL}
	};
	if (m == 'i') /* specifiers 'd' & 'i' are handled the same */
		c = 'd';
	else
		c = m;

	for (i = 0; i < 1; i++)
	{
		if (c == sp[i].spec)
			return (sp[i].f);
	}
	return (sp[i].f); /* returning NULL */
}
