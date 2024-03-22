#include <stdio.h>

int factorielle(int n);
int combinaison(int n , int p);
int arrangement(int n , int p);
int puissance(int n, int p);
int main(){
	int n = 0 , p = 0;
	printf("Calcule de la combinaison nCp et arrangement nAp \n Saisissez n : ");
	scanf("%d",&n);
	printf("\n Saisissez p : ");
	scanf("%d",&p);
	printf("Combinaison : %d\n",combinaison(n,p));
	printf("Arrangement : %d\n",arrangement(n,p));
	printf("n^p : %d\n",puissance(n,p));
	
	return 0;
}
int factorielle(int n){
	int fact=1;
	for(int i = 1 ; i<=n ; i++){
		fact *= i;
	}
	return fact;
}

int combinaison(int n , int p){
	return factorielle(n)/(factorielle(n-p)*factorielle(p));
}

int arrangement(int n , int p){
	return factorielle(n)/(factorielle(n-p));
}

int puissance(int n, int p) {
  int resultat = 1;
  for (int i = 0; i < p; ++i) {
    resultat *= n;
  }
  return resultat;
}
