#include <iostream>
int main (){
	
	printf ("****** AND ******\n");
	printf (" tue && true : %d\n", (1 && 1));
	printf (" tue && false : %d\n", (1 && 0));
	printf (" false && true : %d\n", (0 && 1));
	printf (" false && false : %d\n", (0 && 0));
	
	
	printf ("****** OR ******\n");
	printf (" tue || true : %d\n", (1 || 1));
	printf (" tue || false : %d\n", (1 || 0));
	printf (" false || true : %d\n", (0 || 1));
	printf (" false || false : %d\n", (0 || 0)); 
	
		printf ("****** XOR ******\n");
	printf (" tue ^ true : %d\n", (1 ^ 1));
	printf (" tue ^ false : %d\n", (1 ^ 0));
	printf (" false ^ true : %d\n", (0 ^ 1));
	printf (" false ^ false : %d\n", (0 ^ 0));
	
	
	system("Pause");
	return 0;
}
