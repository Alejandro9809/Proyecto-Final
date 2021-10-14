//Programa para ordenar una cadena de números de menor a mayor utilizando el algoritmo insertion sort

# define X 10

int arreglo[X] = {-2,8,10,5,2,-4,3,-1,9,-5}; 

void ciclo(int k, int *x, int *y){
	int j;
	for(j=0;j<=k-1;j++){
		if (*x<*(y+j)){
		    int aux= *x;
			*x= *(y+j);
			*(y+j)=aux;
		}
	}
	return;
}


void ordena(int *ar, int tama){
	int i;
	for(i=1; i<tama; i++){
		ciclo(i, ar+i,ar);
	}
	return;
	
}
int main () {
  ordena(arreglo, X);
  return 0;
}
