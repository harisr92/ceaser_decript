#include <stdio.h>

char string[] = "asz\n";

int main(){
	char plain_text[100];
	int y=0,z,i=0;
	printf("Enter the string\n");
	scanf("%s",string);
	printf("Enter shift value\n");
	scanf("%d",&z);
	while(string[i] != '\n'){
		plain_text[i] = (char)(string[i]-z);			
		i++;
	}
	printf("%s\n",plain_text);	
	return 0;
}
