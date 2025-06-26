#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char value;
    struct Node* next;
} Node;

typedef struct Stack {
    Node* top;
} Stack;

Stack* createStack(){
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    if (stack) {
        stack->top = NULL;
    }
    return stack;
}

void push(Stack* p, int item){
    Node* novo = (Node*) malloc(sizeof(Node));
    if (novo) {
        novo->value = item;
        novo->next = p->top;
        p->top = novo;
    }

}
void pop(Stack* p){
    if (p->top != NULL) {
        Node* temp = p->top;
        p->top = p->top->next;
        free(temp);
    } else {
        printf("Pilha vazia!\n");
    }
}
int peek(Stack *p){
    if (p->top != NULL) {
        return p->top->value;
    } else {
        return -1;
    }
}
int isEmpty(Stack* p){
    return p->top == NULL;
}
int size(Stack* p){
    int count = 0;
    Node* current = p->top;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int isValid(char* s) {
    Stack* pilha = createStack();
    int tam = strlen(s);
    for (int i = 0; i < tam; i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            push(pilha, c);
        } else {
            if (isEmpty(pilha)){
                return 0;
            }
            char topo = peek(pilha);
            if ((c == ')' && topo == '(') ||
                (c == ']' && topo == '[') ||
                (c == '}' && topo == '{')) {
                pop(pilha);
            } else {
                return 0;
            }
        }
    }
    int resultado = isEmpty(pilha);
    return resultado;
}

int main()
{
    char s[100];
    scanf("%s", s);
    if (isValid(s)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}
