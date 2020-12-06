#include <stdio.h>
#include <string.h>
//인수받은 문자를 한번만 지우고 당긴다
void delete_a_char(char *s, char c){
	
  //문자열의 길이만큼 검사
	for (int i = 0; i < strlen(s); i++){
		if (s[i] == c){
    
      //문자가 같은 곳에서부터 당긴다
			for (int j = i; j < strlen(s); j++){
				s[j] = s[j + 1];
			}
			break;
		}
	}
}
//인수받은 문자를 계속 지우고 당긴다
void delete_chars(char *s, char c){

  //문자열의 길이만큼 검사
	for (int i = 0; i < strlen(s); i++){
		if (s[i] == c){
      //문자가 같은 곳에서부터 당긴다
			for (int j = i; j < strlen(s); j++){
				s[j] = s[j + 1];
			}
		}
	}
}
int main(){
	char str[80];
	gets(str);
	delete_a_char(str, 'o');
	puts(str);
	delete_chars(str, 'g');
	puts(str);
	return 0;
}
