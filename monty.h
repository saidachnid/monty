#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

/**
 *  * struct node_s - doubly linked list representation of a stack (or queue)
 *   * @data: integer
 *    * @prev: points to the previous element of the stack (or queue)
 *     * @next: points to the next element of the stack (or queue)
 *      *
 *       * Description: doubly linked list node structure
 *        * for stack, queues, LIFO, FIFO
 *         */
typedef struct node_s
{
	    int data;
	        struct node_s *prev;
		    struct node_s *next;
} node_t;

/**
 *  * struct op_s - opcode and its function
 *   * @opcode: the opcode
 *    * @func: function to handle the opcode
 *     *
 *      * Description: opcode and its function
 *       * for stack, queues, LIFO, FIFO
 *        */
typedef struct op_s
{
	    char *opcode;
	        void (*func)(node_t **stack, unsigned int line_number);
} op_t;

extern node_t *head;
typedef void (*op_func)(node_t **, unsigned int);

/*file operations*/
void open_data_file(char *file_name);
int parse_data_line(char *buffer, int line_number, int format);
void read_data_file(FILE *);
int len_data_chars(FILE *);
void find_data_func(char *, char *, int, int);

/*Stack operations*/
node_t *create_stack_node(int data);
void free_stack_nodes(void);
void print_stack_data(node_t **, unsigned int);
void push_to_stack(node_t **, unsigned int);
void push_to_queue(node_t **, unsigned int);

void call_stack_func(op_func, char *, char *, int, int);

void print_top_data(node_t **, unsigned int);
void pop_top_data(node_t **, unsigned int);
void no_operation(node_t **, unsigned int);
void swap_stack_nodes(node_t **, unsigned int);

/*Math operations with nodes*/
void add_stack_nodes(node_t **, unsigned int);
void sub_stack_nodes(node_t **, unsigned int);
void div_stack_nodes(node_t **, unsigned int);
void mul_stack_nodes(node_t **, unsigned int);
void mod_stack_nodes(node_t **, unsigned int);

/*String operations*/
void print_character(node_t **, unsigned int);
void print_string_data(node_t **, unsigned int);
void rotate_left(node_t **, unsigned int);

/*Error handling*/
void handle_error(int error_code, ...);
void handle_more_error(int error_code, ...);
void handle_string_error(int error_code, ...);
void rotate_right(node_t **, unsigned int);

#endif
#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

/**
 *  * struct node_s - doubly linked list representation of a stack (or queue)
 *   * @data: integer
 *    * @prev: points to the previous element of the stack (or queue)
 *     * @next: points to the next element of the stack (or queue)
 *      *
 *       * Description: doubly linked list node structure
 *        * for stack, queues, LIFO, FIFO
 *         */
typedef struct node_s
{
	    int data;
	        struct node_s *prev;
		    struct node_s *next;
} node_t;

/**
 *  * struct op_s - opcode and its function
 *   * @opcode: the opcode
 *    * @func: function to handle the opcode
 *     *
 *      * Description: opcode and its function
 *       * for stack, queues, LIFO, FIFO
 *        */
typedef struct op_s
{
	    char *opcode;
	        void (*func)(node_t **stack, unsigned int line_number);
} op_t;

extern node_t *head;
typedef void (*op_func)(node_t **, unsigned int);

/*file operations*/
void open_data_file(char *file_name);
int parse_data_line(char *buffer, int line_number, int format);
void read_data_file(FILE *);
int len_data_chars(FILE *);
void find_data_func(char *, char *, int, int);

/*Stack operations*/
node_t *create_stack_node(int data);
void free_stack_nodes(void);
void print_stack_data(node_t **, unsigned int);
void push_to_stack(node_t **, unsigned int);
void push_to_queue(node_t **, unsigned int);

void call_stack_func(op_func, char *, char *, int, int);

void print_top_data(node_t **, unsigned int);
void pop_top_data(node_t **, unsigned int);
void no_operation(node_t **, unsigned int);
void swap_stack_nodes(node_t **, unsigned int);

/*Math operations with nodes*/
void add_stack_nodes(node_t **, unsigned int);
void sub_stack_nodes(node_t **, unsigned int);
void div_stack_nodes(node_t **, unsigned int);
void mul_stack_nodes(node_t **, unsigned int);
void mod_stack_nodes(node_t **, unsigned int);

/*String operations*/
void print_character(node_t **, unsigned int);
void print_string_data(node_t **, unsigned int);
void rotate_left(node_t **, unsigned int);

/*Error handling*/
void handle_error(int error_code, ...);
void handle_more_error(int error_code, ...);
void handle_string_error(int error_code, ...);
void rotate_right(node_t **, unsigned int);

#endif

