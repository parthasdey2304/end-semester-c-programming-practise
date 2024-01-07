#include <stdio.h>

int main() {
	int phy[40], chem[40], bio[40], i, above_80, below_34;
	printf("Enter the marks of the students : \n");

	for(i = 0; i < 40; i++) {
		printf("\nMarks of Student no : %d\n", i + 1);
		printf("Physics : ");
		scanf("%d", &phy[i]);
		printf("Chemistry : ");
		scanf("%d", &chem[i]);
		printf("Biology : ");
		scanf("%d", &bio[i]);

		above_80 = ((phy[i] + chem[i] + bio[i])/3 >= 80)? 1 : 0;
		below_34 = ((phy[i] + chem[i] + bio[i])/3 <= 34)? 1 : 0;
	}

	printf("\n\nThe Number of students getting 80% and above : %d\nThe Number of students getting 34% and below : %d.", above_80, below_34);

	return 0;
}
