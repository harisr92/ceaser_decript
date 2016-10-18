#include <stdio.h>

int main(){
	char plain_text[100],string[100];
	int y=0,z,i=0;
	printf("Enter the string\n");
	scanf("%s",string);
	printf("Enter shift value\n");
	scanf("%d",&z);
	while(string[i] != '\0'){
		if(string[i] >= 'a' && string[i] <= 'z'){
			plain_text[i] = (char)(((string[i] - z - 'a' + 26)%26) + 'a');
		}
		else{
			plain_text[i] = (char)(string[i] - z);
		}
		i++;	
	}
	printf("%s\n",plain_text);	
	return 0;
}
