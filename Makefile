CC := gcc
#CFLAGS := 
DEST := ./build

random: read_formatted_file.c
	mkdir -p $(DEST)
	$(CC) read_formatted_file.c -lcs50 -o $(DEST)/read_formatted_file