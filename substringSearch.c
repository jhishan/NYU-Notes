#include <stdio.h>
#include <string.h>
#include <time.h>

char *contains(char string[], char substring[])
{
	int string_length = strlen(string);
	int substring_length = strlen(substring);
	int i;
	for(i = 0; i <string_length; i++){
		int j;
		int truth_value = 1;
		for(j = 0; j<substring_length; j++){
			if(substring[j] != string[i+j]){
				truth_value = 0;
			}
		}
		if(truth_value > 0){
			return &string[i];
		}
	}
	return NULL;
}

int main()
{ 
	char string1[] = "butterfly";
	char string2[] = "ly";
	char c;
	char a;
	int t;
	int end;

	clock_t start = clock(), diff;
	c = *contains(string1,string2);
	end = clock();
	t = end - start;
	printf("%d\n", t);

	start = clock();
	a = *strstr(string1, string2);
	end = clock();
	t = end - start;
	printf("%d\n", t);

	return 0;
}
	