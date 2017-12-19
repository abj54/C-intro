/*
	Name: Anwesh Joshi
	lineholder.h - Homework5
	Date: 04/10/2017
*/


# define MAXLINE 1000 // Maximum lines that can be hold
# define MAXLEN 2000  // Maximum length of individual line

void init_lineholder(int);  // Starts the lineholder by initializing
                            // required variables

void insert_line(char *);   // Adds line to the array of pointers 
			    // by allocating memory for new line and
                            // freeing it when no longer needed 

void print_lines(void);     // Print the lines in the array and frees
                            // memory used for them
