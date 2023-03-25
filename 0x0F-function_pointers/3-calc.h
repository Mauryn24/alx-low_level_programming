#ifndef PROTOTYPES
#define PROTOTYPES

/**
 * struct op - struct op
 * @op: the operator
 * @f: the function associatef
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* functions to choose from for 5 different operations */

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

/* function to select correct operation to perform */

int (*get_op_func(char *s))(int, int);

#endif
