#include<stdio.h>
#define MAX 100
void defineArray(int arr[], int *n);
void printArray(int arr[], int *n);
void insertArray(int arr[], int *n);
void deleteArray(int arr[], int *n);
void updateArray(int arr[], int *n);
int main(){
	printf("-----Array Operations-----\n\n");
	int key = 1; // Inside While Loop
	int arr[MAX];	// Declaring an array of size "MAX"
	int size = 0;
	printf("Enter Size of Array: ");
	scanf("%d", &size);
	while (key == 1){
		printf("-----Operations-----\n\n");
		printf("1.Define Array\n");
		printf("2.Print Array\n");
		printf("3.Insert Array\n");
		printf("4.Delete Array\n");
		printf("5.Update Element\n");
		printf("6.Exit\n\n");

		int choice;
		printf("Enter Choice: ");
		scanf("%d", &choice);
			
		switch(choice){
			case 1:
				printf("The Size of Array = %d\n", size);
				defineArray(arr, &size);
				break;
			case 2:
				if (size == 0){
					printf("Cannot Print");
				}
				else{
					printf("Printing Array...\n\n");
					printArray(arr, &size);
				}
				break;
			case 3:
				if (size > MAX){
					printf("Cannot Insert!\n\n");
					break;
				}
				else{
					printf("Inserting Element...\n\n");
					insertArray(arr, &size);
					break;
				}
			case 4:
				if (size <= 0){
					printf("Cannot Delete!\n\n");
					break;
				}
				else{
					printf("Deleting Element...\n\n");
					deleteArray(arr, &size);
					break;
				}
			case 5:
				if (size <= 0){
					printf("Cannot Update!\n\n");
					break;
				}
				else{
					printf("Updating Element...\n\n");
					updateArray(arr, &size);
					break;
				}
			case 6:
				printf("Exiting Program...\n\n");
				key = 0;
				break;
			default:
				printf("Enter Valid Input!!\n\n");
				break;
		}
	}
}

void printArray(int arr[], int *n){
	printf("[");
	for (int i = 0; i < *n - 1; i++){
		printf("%d ", arr[i]);
	}
	printf("%d]\n\n", arr[*n-1]);
}


void defineArray(int arr[], int *n){
	printf("Defining Array...\n\n");
	for (int i = 0; i < *n; i++){
		printf("A[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("Printing Defined Array...\n\n");
	printArray(arr, n);
}

void insertArray(int arr[], int *n){
	int element, position;
	printf("Enter Value of Element to be inserted: ");
	scanf("%d", &element);
	printf("Enter Position at which Element is to be inserted: ");
	scanf("%d", &position);
	
	for (int i = *n; i > position - 1; i--){
		arr[i] = arr[i - 1];
	}
	arr[position - 1] = element;
	
	printf("Array after Inserting...\n\n");
	(*n)++;
	printArray(arr, n);
}

void deleteArray(int arr[], int *n){
	int position;
	printArray(arr, n);
	printf("Enter the position of the element to be deleted: ");
	scanf("%d", &position);
	for (int i = position - 1; i < *n; i++){
		arr[i] = arr[i+1];
		
	}
       	(*n)--;
	printf("Array after Deleting...\n\n");
	printArray(arr, n);	
}

void updateArray(int arr[], int *n){
	int position, value;
	printf("\n\n");
	printArray(arr, n);
	printf("Enter Position to be updated: ");
	scanf("%d", &position);
	printf("Enter Value to be updated: ");
	scanf("%d", &value);
	arr[position - 1] = value;
	printf("Updated Array...\n\n");
	printArray(arr, n);
}
