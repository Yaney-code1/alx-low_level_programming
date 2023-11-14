#include "main.h"
#include <stdlib.h>
/**
 * oh_free_grid -main entry
 * @grid: input
 * @height: input
 */
void oh_free_grid(char **grid, size_t height)
{
if (grid != NULL && height != 0)
{
for (; height > 0; height--)
	free(grid[height - 1]);
		free(grid);
}
}
/**
 * strtow - function that splits a string into words.
 * @str: string to split
 * Return: a pointe rto the newly allocated memory for the string
 */
char **strtow(char *str)
{
char **aout;
size_t c, height, i, j, a1;
if (str == NULL || *str == '\0')

return (NULL);
for (c = height = 0; str[c] != '\0'; c++)
	if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		height++;
aout = malloc(sizeof(char *) * (height));
if (aout == NULL)
{
free(aout);
return (NULL);
}
for (i = a1 = 0; i < height; i++)
{
for (c = a1; str[c] != '\0'; c++)
{
if (str[c] == ' ')
	a1++;
if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
{
aout[i] = malloc((c - a1 + 2) * sizeof(char));
if (aout[i] == NULL)
{
oh_free_grid(aout, i);
return (NULL);
}
break;
}
}
for (j = 0; a1 <= c; a1++, j++)
aout[i][j] = str[a1];
aout[i][j] = '\0';
}
aout[i] = NULL;
return (aout);
}
