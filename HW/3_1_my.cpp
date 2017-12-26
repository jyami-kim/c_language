#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
char stack[MAX_SIZE];
int top = -1;
int check = 0;

void stack_full(void) {
	printf("Stack is full\n");
}

char stack_empty(void) {
	printf("Stack is empty\n");
	return NULL;
}

void push(char x) {
	if (top == MAX_SIZE - 1) {
		stack_full();
		return;
	}
	stack[++top] = x;
}

char pop() {
	if (top == -1) {
		check++;
		stack_empty();
	}
	return stack[top--];
}

int main(void) {
	char expression[MAX_SIZE];
	scanf("%s", expression);
	for (int i = 0;i < strlen(expression);i++) {
		if (expression[i] == '(')
			push('(');
		if (expression[i] == ')')
			pop();
		if (i == strlen(expression) - 1) {
			if (check != 0)
				printf("Unbalanced\n");
			else {
				if (top == -1)
					printf("Balanced\n");
				else
					printf("Unbalanced\n");
			}
			
		}
	}

	return 0;
}