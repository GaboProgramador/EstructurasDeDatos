#include  <stdio.h>

#include <math.h>



int medir_largo (int valor)

{

	int i;

	for (i=0; valor>0; i++){

		valor/=10;

	}

	return i;

}



int capicua (int valor)

{

	int invertido=0, retval=0, i, original=valor;

	int largo=medir_largo  (valor);

	for (i=largo; i>0; i--){

		invertido+=pow (10,i-1)*(valor%10);

		valor /=10;

	}

	if (original == invertido){

		retval=1;

	}

	return retval;

}



int main ()

{

	int valor;

	do {

		printf ("Introduce un valor mayor que 9: ");

		scanf ("%i",&valor);

		if (valor <=9){

			printf ("Valor no valido. ");

		}

	}while (valor <= 9);



	if (capicua (valor) == 1){

		printf ("El valor %i es capicuo.\n",valor);

	}else{

		printf ("El valor %i no es capicuo\n",valor);

	}

	return 0;

}
