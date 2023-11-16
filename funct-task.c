#include "monty.h"

/**
 *  * Opens a file and reads its contents.
 *   * @param file_name: The file path.
 *    */
void open_file_and_read(char *file_name) {
	    FILE *file_descriptor = fopen(file_name, "r");

	        if (file_name == NULL || file_descriptor == NULL)
			        handle_error(2, file_name);

		    read_file(file_descriptor);
		        fclose(file_descriptor);
}

/**
 *  * Reads a file line by line and processes each line.
 *   * @param file_descriptor: Pointer to the file descriptor.
 *    */
void read_file(FILE *file_descriptor) {
	    int line_number, format = 0;
	        char *buffer = NULL;
		    size_t len = 0;

		        for (line_number = 1; getline(&buffer, &len, file_descriptor) != -1; line_number++) {
				        format = parse_line(buffer, line_number, format);
					    }
			    free(buffer);
}

/**
 *  * Parses a line into opcode and value, then calls the appropriate function.
 *   * @param buffer: Line from the file.
 *    * @param line_number: Line number.
 *     * @param format: Storage format (0 for stack, 1 for queue).
 *      * @return: Updated format.
 *       */
int parse_line(char *buffer, int line_number, int format) {
	    char *opcode, *value;
	        const char *delim = "\n ";

		    if (buffer == NULL)
			            handle_error(4);

		        opcode = strtok(buffer, delim);
			    if (opcode == NULL)
				            return format;

			        value = strtok(NULL, delim);

				    if (strcmp(opcode, "stack") == 0)
					            return 0;
				        if (strcmp(opcode, "queue") == 0)
						        return 1;

					    find_and_call_function(opcode, value, line_number, format);
					        return format;
}

/**
 *  * Finds the appropriate function for the given opcode and calls it.
 *   * @param opcode: Opcode.
 *    * @param value: Argument of opcode.
 *     * @param line_number: Line number.
 *      * @param format: Storage format (0 for stack, 1 for queue).
 *       */
void find_and_call_function(char *opcode, char *value, int line_number, int format) {
	    int j;
	        int flag;

		    instruction_t func_list[] = {
			            {"push", add_to_stack},
				            {"pall", print_stack},
					            // ... (other instructions)
						    //         {NULL, NULL}
						    //             };
						    //
						    //                 if (opcode[0] == '#')
						    //                         return;
						    //
						    //                             for (flag = 1, j = 0; func_list[j].opcode != NULL; j++) {
						    //                                     if (strcmp(opcode, func_list[j].opcode) == 0) {
						    //                                                 call_function(func_list[j].f, opcode, value, line_number, format);
						    //                                                             flag = 0;
						    //                                                                     }
						    //                                                                         }
						    //                                                                             if (flag == 1)
						    //                                                                                     handle_error(3, line_number, opcode);
						    //                                                                                     }
						    //
						    //                                                                                     /**
						    //                                                                                      * Calls the required function based on the opcode.
						    //                                                                                       * @param func: Pointer to the function to be called.
						    //                                                                                        * @param op: Opcode string.
						    //                                                                                         * @param val: Numeric value string.
						    //                                                                                          * @param line_number: Line number.
						    //                                                                                           * @param format: Storage format (0 for stack, 1 for queue).
						    //                                                                                            */
						    //                                                                                            void call_function(op_func func, char *op, char *val, int line_number, int format) {
						    //                                                                                                stack_t *node;
						    //                                                                                                    int flag;
						    //                                                                                                        int j;
						    //
						    //                                                                                                            flag = 1;
						    //                                                                                                                if (strcmp(op, "push") == 0) {
						    //                                                                                                                        if (val != NULL && val[0] == '-') {
						    //                                                                                                                                    val = val + 1;
						    //                                                                                                                                                flag = -1;
						    //                                                                                                                                                        }
						    //                                                                                                                                                                if (val == NULL)
						    //                                                                                                                                                                            handle_error(5, line_number);
						    //                                                                                                                                                                                    for (j = 0; val[j] != '\0'; j++) {
						    //                                                                                                                                                                                                if (!isdigit(val[j]))
						    //                                                                                                                                                                                                                handle_error(5, line_number);
						    //                                                                                                                                                                                                                        }
						    //                                                                                                                                                                                                                                node = create_node(atoi(val) * flag);
						    //                                                                                                                                                                                                                                        if (format == 0)
						    //                                                                                                                                                                                                                                                    func(&node, line_number);
						    //                                                                                                                                                                                                                                                            if (format == 1)
						    //                                                                                                                                                                                                                                                                        add_to_queue(&node, line_number);
						    //                                                                                                                                                                                                                                                                            } else {
						    //                                                                                                                                                                                                                                                                                    func(&head, line_number);
						    //                                                                                                                                                                                                                                                                                        }
						    //                                                                                                                                                                                                                                                                                        }
						    //
