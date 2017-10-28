#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int i,j,x,y,m,n,g=0,u=0,l=0;
	char matris[5][5]={{'0','1','2','3','4'},{'1','a','a','a','a'},{'2','a','a','a','a'},{'3','a','a','a','a'},{'4','a','a','a','a'}};
	
	char cpu[5][5]={{' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '},{'*',' ','*','*','*'},{'*',' ',' ',' ',' '},{'*',' ',' ',' ',' '}};
	
	char matriz[5][5]={{' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '}};
	printf("Las reglas: solo tienes 6 espacios para hacer barcos puedes hacer dos de 3 o uno de 4 y uno de dos\n\n\n");
	printf("Ingresa tu barco por cordenadas\n");
	printf("Solo puedes meter 2 barcos de 3 espacios.\nLas cordenadas van del 0 hasta el 4---\n");
	
	while(g<6){
		printf("Matriz para ubicarte :v\n");
			for(i=0;i<5;i++){
				for(j=0;j<5;j++){
					printf(" %c ",matris[i][j]);
				}
			 printf("\n");
			}
			
	
			scanf("%d,%d", &x,&y );
		if(matriz[x][y]!='*'){
			matriz[x][y]='*';
			matris[x][y]='*';
			g++;
			}
		else
			printf("\nEse ya esta cabron\n");
			}	
			
	while(l<100){
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf( " %c ",matriz[i][j]);
			}
		printf("\n");
		}
printf("\n----------------------------\n\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf( " %c ", cpu[i][j]);
			}
		printf("\n");
		}
	printf("\n\n--Da un tiro x,y-------");
		scanf("%d,%d", &x,&y);
		if(cpu[x][y]=='*'){
		 cpu[x][y]='!';
		 l++;
		 }
	     else{
	     	if(cpu[x][y]!='!'){
	     	  	cpu[x][y]='0';
	     	  	}
	     	}
	    printf("\nTurno del procesador\n");
	    m=rand()%5;
	    n=rand()%5;
	     printf("\n+++++El cpu eligio %d,%d+++++\n", m,n);
	    if(matriz[m][n]=='*'){
	    	matriz[m][n]='!';
	    	u++;
	    	}
	    else
	    {
	    	if(matriz[m][n]!='!')
	    	matriz[m][n]='O';
	    	
	    }
	    if(u==6){
	    	printf("\n!!!!!!!GANO EL CPU!!!!!! \n");
	    	break;
	    	}
	    if(l==6){
	    	printf("\nGanaste!!!!!!!!!\n");
	    	break;
	    	}
	}
	return 0;
}
