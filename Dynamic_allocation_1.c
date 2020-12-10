#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
char* get_Dstr(int size){
	char* s;
	int index = 0;

	s = (char*)malloc(sizeof(char)*(size + 1));
	
	for (char c = getch(); c != '\r'; c = getch()){
		printf("%c", c);

		if (index < size){
			s[index++] = c;
		}
		else{ 
			char *copy_s = (char*)malloc(sizeof(char)*(size+1));
			for (int i = 0; i < size; i++){
				copy_s[i] = s[i];
			}
			s = (char*)malloc(sizeof(char)*(++size + 1));
			for (int i = 0; i < size - 1; i++){
				s[i] = copy_s[i];
			}
			s[index++] = c;

			free(copy_s);
		}
	}
	s[index] = NULL;
	printf("\n");
	char *copy_s = (char*)malloc(sizeof(char) * (++index));
	for (int i = 0; i < index; i++){
		copy_s[i] = s[i];
	}
	s = (char*)malloc(sizeof(char) * index);
	for (int i = 0; i < index; i++){
		s[i] = copy_s[i];
	}
	printf("\n메모리 크기는 %d입니다.", _msize(s));
	return s;
}
int main(){
	char *dstr = get_Dstr(20);
	printf("입력된 문자열의 길이는 %d이며, 문자열은 %s입니다.\n", strlen(dstr), dstr);
	return 0;
}
