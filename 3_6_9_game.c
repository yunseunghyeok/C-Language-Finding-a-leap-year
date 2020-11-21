#include <stdio.h>
int getClapCount(int number);
void printClap(int count);
int main(){
	int gamestate = 1;
	int gameCount = 1;
	int myAnswer;
	while (gamestate){
		int clap = getClapCount(gameCount);
		if (gameCount % 4 == 0){
			
			printf("[user] : ");
			scanf("%d", &myAnswer);
		
			if (clap > 0){
				if (myAnswer + clap != 0){
					gamestate = 0;
				}
				else {
					printf("[user] : ");
					printClap(clap);
				}
			}
			else{
				if (myAnswer != gameCount){
					gamestate = 0;
				}
			}
			
		}
		else{
			
			printf("[computer%d] : ", gameCount % 4);
			if (clap > 0){
				printClap(clap);
			}
			else{
				
				printf("%d\n", gameCount);
			}
		}
		gameCount++;
	}
	return 0;
}
// 10
int getClapCount(int number){
	
	int count = 0;
	
	for (int i = number; i > 0; i /= 10){
		
		if ((i % 10) % 3 == 0 && i%10 != 0)
			count++;
	}
	return count;
}
void printClap(int count){
	
	for (int i = 0; i < count; i++)
		printf("짝! ");

	printf("\n");
}
