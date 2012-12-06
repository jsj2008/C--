#ifndef PARSER_GLOBAL_H
#define PARSER_GLOBAL_H

#ifndef YYSTYPE
#define YYSTYPE struct Syntree_node *
#endif

#define BOOL unsigned int
#define TRUE 1
#define FALSE 0

#define MAX_STACK_SIZE 1024

#define STACK_PUSH(stack, top, entry) \
    do { \
        stack[top++] = entry; \
    } while (0)

#define STACK_POP(stack, top) stack[--top]
#define STACK_TOP(stack, top) stack[top - 1]

#define LIST_ADD(list, entry) \
    do { \
        if (list == NULL) { \
            list = entry; \
        } else { \
            typeof(list) ptr = list; \
            while (ptr->next) ptr = ptr->next; \
            ptr->next = entry; \
        } \
    } while (0)

int lastval;
double lastdval;

#endif /* !PARSER_GLOBAL_H */

