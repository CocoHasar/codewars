#include <stdlib.h>

char *are_you_playing_banjo(const char *name)
{
	int len_name = 0;
	while(name[len_name])
		len_name++;

	char *plays = " plays banjo";
	char *doesnt_play = " does not play banjo";

	int len_plays = 0;
	while(plays[len_plays])
		len_plays++;

	int len_doesnt_play = 0;
	while(doesnt_play[len_doesnt_play])
		len_doesnt_play++;

	if(name[0] == 'r' || name[0] == 'R')
	{
		char *answer = malloc(len_name + len_plays + 1);
		if(answer == NULL) return NULL;

		int i = 0;
		while(i < len_name)
		{
			answer[i] = name[i];
			i++;
		}
		int j = 0;
		while(j < len_plays)
		{
			answer[i] = plays[j];
			i++;
			j++;
		}
		answer[i] = '\0';
		return answer;
	}
	else
	{
		char *answer = malloc(len_name + len_doesnt_play + 1);
		if(answer == NULL) return NULL;

		int i = 0;
		while(i < len_name)
		{
			answer[i] = name[i];
			i++;
		}
		int j = 0;
		while(j < len_doesnt_play)
		{
			answer[i] = doesnt_play[j];
			i++;
			j++;
		}
		answer[i] = '\0';
		return answer;
	}	
}
