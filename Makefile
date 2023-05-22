CC := gcc
#CFLAGS := 
DEST := ./build

random: read_file_lines.c
	mkdir -p $(DEST)
	$(CC) read_file_lines.c -lcs50 -o $(DEST)/read_file_lines