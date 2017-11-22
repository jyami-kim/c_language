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
	if (top >= MAX_SIZE - 1) {
		stack_full();
		return;
	}
	stack[++top] = x;
}

char pop() {
	if (top == -1) {
		++check;
		return stack_empty();
	}
	return stack[top--];
}

int main(void) {
	char str[MAX_SIZE];
	scanf("%s", str);
	for (int i = 0;i < strlen(str);i++) {
		if (str[i] == '(') {
			push('(');
		}
		else if (str[i] == ')') {
			pop();
		}
		if (i == strlen(str) - 1) {
			if (check == 0) {
				if (top == -1)
					printf("Balanced");
				else
					printf("Unbalanced");
			}
			else
				printf("Unbalanced");
		}
	}
	return 0;
}
