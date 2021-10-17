#include <stdlib.h>

void mx_strdel(char**);

char *mx_strncpy(char*, const char*, int);

char *mx_strnew(const int);

int mx_count_words(const char*, char);

char **mx_strsplit(char const *s, char c) 
{
	int count = mx_count_words(s, c);
	int j = 0;
	char **res = (char **)malloc(8 * count);

	for (int i = 0; i < count; i++) 
	{
		int word_length = 0;
		int start = 0;

		for (; s[j]; j++) 
		{
			if (s[j] != c) 
			{
				word_length += 1;
				if (start == 0)
				{
					start = j;
				}
			}

			else if (s[j] == c && word_length)
			{
				break;
			}
		}

		char* new_word = mx_strnew(word_length);

		for (int k = 0, m = start; m < j; k++, m++)
		{
			new_word[k] = s[m];
		}

		res[i] = new_word;
	}

	res[count] = NULL;
	return res;
}

