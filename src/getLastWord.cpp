/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
char * rev(char *);
#include <stdlib.h>

char * get_last_word(char * str){
	char *lastWord;
	int i = 0, len = 0,j,k,l=0;
	lastWord = (char *)malloc(sizeof(char) * 100);
	if (str[i] == '\0')
		return "";
	else
	{
		while (str[i] != NULL)
		{
			len++; i++;
		}
		k = len - 1;
		while (str[k] == ' ')
			k--;
		j = k;
		while (str[j] != ' ' && j!=-1)
			j--;
		if (k == 0 && str[i]==' ')
		{
			return lastWord;
		}
		for (i = (j+1); i <= k; i++)
		{
			lastWord[l] = str[i];
			l++;
		}
		lastWord[l] ='\0';
		return lastWord;
	}
}