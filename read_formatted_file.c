#include <cs50.h>
#include <stdio.h>

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
	char file_read_string1[20];
	char file_read_string2[20];	

	// Read each row from file and save them into separate character arrays
	fscanf(file_pointer, "%s %s", file_read_string1, file_read_string2);

	// Close the file and remove it from the memory
	fclose(file_pointer);

	// Print each character array
	printf("%s\n", file_read_string1);
	printf("%s\n", file_read_string2);

	return 0;
}