#include <stdio.h>
int main() {

	//Welcome, read movie number and create arrays for name and year
	printf("Risham's Movie Database\n");
	printf("Number of movies you would like to enter:\n");
	int num;
	scanf("%d", &num);
	int year[num];
	char name[num][200];

	//Ask user and fill up movie names and years arrays
	for(int i = 0;i<num;i++) {
		printf("Enter %d. movie name:\n", i+1);
		scanf("%s", name[i]);
		printf("Enter %d. movie year:\n", i+1);
		scanf("%d", &year[i]);
	}
	
	//Output database
	printf("Database Output:\n");
	for(int i = 0;i<num;i++) {
		printf("%s (%d)\n", name[i], year[i]);
	}
}