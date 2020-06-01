//Arbol genelogico
#include <stdio.h>
#include <stdlib.h>

int main ()
{
char opc;

printf("\n \n ARBOL GENEALOGICO \n \n");

printf("\n a Tatarabuelos paternos\n ");
printf("\n b Tatarabuelos maternos\n ");
printf("\n c Bisabuelos paternos\n");
printf("\n d Bisabuelos maternos\n");
printf("\n e Abuelospaternos \n");
printf("\n f Abuelos maternos \n");
printf("\n g Padres \n ");
printf("\n h Hermanos \n");
printf("\n i Yo \n");
printf("\n j Salir \n ");
fflush(stdin);
scanf("%c",&opc);

switch(opc){
        	
			case 'a':
		printf("\n \n Tatarabuelos paternos \n");
		printf("Aurelio y Jubencia");
		break; 
		
			case 'b':
		printf("\n \n Tatarabuelos maternos \n");
		printf("ManuelYJuanita");
		break;
		
			case 'c':
		printf("\n \n Bisabuela paternos \n");
		printf("Martin y Clementina ");
		break;
		
		    case 'd':
		printf("\n \n Bisabuela maternos \n");
		printf("Luis y Aurora ");
		break;
		
		
		   case 'e':
		printf("\n \n Abuelos paternos \n");
		printf("Trinidad y Rocendo");
		break;
		
		   case 'f':
		printf("\n \n Abuelos maternos \n");
		printf("Jaime y Olga ");
		break;
		
		   case 'g':
		printf("\n \n Padres \n");
		printf("Antonio y Adriana ");
		break;
		
		case'h':
		printf("\n\n Hermanos \n");
		printf("Hector valeria");
		break;
		
		case'i':
		printf("\n\n Yo \n");
		printf("Jessica");
		break;
		
		case'j':
		printf("\n\n Salir \n");
	    break;
		
	}
	
	
	
	return 0;
	
}
