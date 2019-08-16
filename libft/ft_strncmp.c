
#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int main(int argc, const char * argv[])
{
    /* Create a place to store our results */
    int result;

    /* Create two arrays to hold our data */
    char example1[50];
    char example2[50];

    /* Copy two strings into our data arrays */
    strcpy(example1, "C strncmp at this example");
    strcpy(example2, "C strncmp is a string function");

    /* Compare the two strings provided up to 11 characters */
    result = strncmp(example1, example2, 11);

    /* If the two strings are the same say so */
    if (result == 0) printf("Strings are the same\n");

    /* If the first string is less than the second say so
     (This is because the 'a' in the word 'at' is less than
     the 'i' in the word 'is' */
    if (result < 0) printf("Second string is less than the first\n");

    return 0;
}
