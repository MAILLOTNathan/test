##
## Header
##

# Compile
all:
	gcc -c *.c -Werror -Wall -Wextra
	gcc -o my_cat *.o

# Remove .o files (object files)
clean:
	rm -f *.o

# Call clean and remove binary file
fclean: clean
	rm -f my_cat

# Call fclean and call all
re: fclean all
