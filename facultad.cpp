#include <stdio.h>

int mat, sigue, cont, acum, porc0, porc1,porc2, promo, conprom, acumprom, de1a4, de5a8, mas8, porc3, contprom, prom, max, contM;

main(){
	
	do{
		printf("\n  Materias que cursa = ");
		scanf("%d", &mat);
		
		acum= acum + mat;
		cont= cont + 1;
		
		if(mat >= 1 && mat <= 4){
			de1a4= de1a4 + 1;
		}
		if(mat >= 5 && mat <= 8){
			de5a8= de5a8 + 1;
		}
		if(mat > 8){
			mas8= mas8 + 1;
		}

		if(cont == 1 || mat > max){
			max= mat;
			contM= cont;
		}
		
		printf("\n  Ingrese materias promocionadas = ");
		scanf("%d", &promo);
		
		contprom= contprom + 1;

		
		printf("\n  Sige?\n  0(NO)|| 1(SI)\n  ");
		scanf("%d", &sigue);
		
	}while(sigue == 1);
	
	porc0 = (de1a4 * 100) / cont;
	porc1 = (de5a8 * 100) / cont;
	porc2 = (mas8  * 100) / cont;
	porc3 = (promo * 100) / cont;
	
	prom= acum / cont;

printf("\n******************************************************************");	
printf("\n  -Porcentaje de alumnos que cursan de 1 a 4 materias = %d", porc0);	
printf("\n  -Porcentaje de alumnos que cursan de 5 a 8 materias = %d", porc1);	
printf("\n  -Porcentaje de alumnos que cursan mas de 8 materias = %d", porc2);	
printf("\n  -Porcentaje de alumnos que promocionaron materias   = %d", porc3);
printf("\n  -Promedio  de materias que rinden los alumnos       = %d", prom);
printf("\n  -El alumno %d es quien rinde mas materias, la cantidad es = %d", contM, max);
printf("\n******************************************************************\n");	
	
}
