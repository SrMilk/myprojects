#include <stdio.h>
#include <string.h>

void leString(char *str){
  char ch = '1';
  int i = 0;
  while(ch != '\n'){
    ch = getchar();
    if(ch == '\n'){
      str[i] = '\0';
    } else {
      str[i] = ch;
    }
  }
}

int main(void){
	int i = 0, conta = 0, contp = 0, contat = 0;
	char animal[20][20];
	float peso, pesom = 0;
	char pais[30][30];
	char opc[11];
	
	do{
		scanf("%[^\n]s", animal[i]);
		
		scanf("%f", &peso);
		//scanf("%[^\n]s", pais[i]);
		leString(pais[i]);
		if(!strcmp(animal[i], "tigre")){
			pesom = pesom + peso;
			contat++;
		}else if(!strcmp(animal[i], "macaco")){
			conta++;
		}else if(!strcmp(animal[i], "cobra") && !strcmp(pais[i], "Venezuela")){
			contp++;
		}
		scanf("%s", opc);
		
		i++;
		
	}while(!strcmp(opc, "continuar"));
	printf("%d\n", conta);
	printf("%.2f\n", pesom/contat);
	printf("%d", contp);
	

}
