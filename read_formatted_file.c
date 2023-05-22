#include <cs50.h>
#include <stdio.h>

#define MAX_ROWS 10
#define ROW_TO_READ_FIRST 3
#define ROW_TO_READ_SECOND 10


int main(void)
{
	// Create file pointer
	FILE* file_pointer;

	// Check if file exist and open it for reading
	file_pointer = fopen("user_informations.txt", "r");

	if(file_pointer == NULL)
	{
		printf("Error: file doesn't exist!\n");
		return 1;
	}

	// Create character arrays; they are equal to strings
	// One character array can have 20 characters
	char file_read_string[MAX_ROWS][20];

	// Read each row from file and save them into separate character arrays
	for(int row = 0; row < MAX_ROWS; row++)
	{
		fscanf(file_pointer, "%s", file_read_string[row]);
	}

	// Close the file and remove it from the memory
	fclose(file_pointer);

	// Print each character array
	printf("%s\n", file_read_string[ROW_TO_READ_FIRST - 1]);
	printf("%s\n", file_read_string[ROW_TO_READ_SECOND - 1]);

	return 0;
}