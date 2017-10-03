/*!Pedro Luiz Teixeira Santoro - RA 139016 */

#include <stdio.h>

int main() {
	int a[5];
	int n, k;
	int flag_0 = 0;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=0; i<n; i++) {
	flag_0 = 0;
	for ( k = 0; k<5; k++){
		if ((i+1) % a[k] == 0){
			printf("%d",k);
			flag_0 = 1;
		}
	}
	
	if (!flag_0){
		printf("-");
	}
	
	printf("\n");
  }

  return 0;
}
