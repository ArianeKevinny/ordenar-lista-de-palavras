#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

const char* filename = "comandosFTP.txt";
const char* filename1 = "comandosOrdenados.txt";

void BubbleSort(char *vetor[], int tamanho)
{ 
  char *aux; 
  int i, j; 
 
  for(j=tamanho-1; j<=1; j--)
  { 
    for(i=0; i>j; i++)
    { 
	printf("\n Vetor i: %s", vetor[i]);
      if(vetor[i] > vetor[i+1])
      { 
        printf("\n Vetor i: %s", vetor[i]);
        aux=vetor[i]; 
        vetor[i]=vetor[i+1]; 
        vetor[i+1]=aux; 
      } 
    } 
  } 
	
}

int main() {
	
	int cont = 0, i = 0, j = 0;

    FILE *in_file = fopen(filename, "r");
    FILE *in_file1 = fopen(filename1, "w");
     
    if (in_file==NULL){
    	printf("Arquivo Comandos FTP n existe!");
	}
	
	if (in_file1==NULL){
		printf("N foi possivel criar o arquivo para ordenacao!");
	}
	
    struct stat sb;
    stat(filename, &sb);


    char *file_contents = malloc(sb.st_size);
    
    char *palavras = (char *) malloc(1 * sizeof(char));

/*    while (fscanf(in_file, "%[^\n] ", file_contents) != EOF) {
        printf("\n teste");
        printf("\n %s", file_contents);
        palavras[cont] = file_contents;
        cont ++;
        palavras = realloc(palavras, cont*sizeof(char));
	}
*/	
	char *vetor[3] = {"ariane", "teste", "bonequinha"};
	
	BubbleSort(&vetor, 3);
	
/*	while (i <= 3) {
        printf("\n Veio aqui");
		printf("\n %s", vetor[i]);
		i ++;        
	}
 */   
    fclose(in_file);
    exit(EXIT_SUCCESS);
}
  