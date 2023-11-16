extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);

/*file operations*/
void open_f(char *file_name);
int parse_line(char *buffer, int line_number, int format);
void read_f(FILE *);
int len_chars(FILE *);
void find_func(char *, char *, int, int);

/*Stack operations*/
stack_t *create_node(int n);
void free_nodes(void);
void print_stack(stack_t **, unsigned int);
void add_of_stack(stack_t **, unsigned int);
void add_of_queue(stack_t **, unsigned int);

void call_fun(op_func, char *, char *, int, int);

void print_top(stack_t **, unsigned int);
void pop_top(stack_t **, unsigned int);
void nop(stack_t **, unsigned int);
void swap_nodes(stack_t **, unsigned int);

/*Math operations with nodes*/
void add_stack(stack_t **, unsigned int);
void sub_stack(stack_t **, unsigned int);
void mul_stack(stack_t **, unsigned int);
void div_stack(stack_t **, unsigned int);
void mod_stack(stack_t **, unsigned int);
/*String operations*/
void put_char(stack_t **, unsigned int);
void put_str(stack_t **, unsigned int);
void rotl(stack_t **, unsigned int);

/*Error hanlding*/
void err(int error_code, ...);
void mor_err(int error_code, ...);
void str_err(int error_code, ...);
void rotrev(stack_t **, unsigned int);

#endifextern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);

/*file operations*/
void open_f(char *file_name);
int parse_line(char *buffer, int line_number, int format);
void read_f(FILE *);
int len_chars(FILE *);
void find_func(char *, char *, int, int);

/*Stack operations*/
stack_t *create_node(int n);
void free_nodes(void);
void print_stack(stack_t **, unsigned int);
void add_of_stack(stack_t **, unsigned int);
void add_of_queue(stack_t **, unsigned int);

void call_fun(op_func, char *, char *, int, int);

void print_top(stack_t **, unsigned int);
void pop_top(stack_t **, unsigned int);
void nop(stack_t **, unsigned int);
void swap_nodes(stack_t **, unsigned int);

/*Math operations with nodes*/
void add_stack(stack_t **, unsigned int);
void sub_stack(stack_t **, unsigned int);
void mul_stack(stack_t **, unsigned int);
void div_stack(stack_t **, unsigned int);
void mod_stack(stack_t **, unsigned int);
/*String operations*/
void put_char(stack_t **, unsigned int);
void put_str(stack_t **, unsigned int);
void rotl(stack_t **, unsigned int);

/*Error hanlding*/
void err(int error_code, ...);
void mor_err(int error_code, ...);
void str_err(int error_code, ...);
void rotrev(stack_t **, unsigned int);

#endif
