#include <stdio.h>
typedef struct exp {
	float operand1, operand2;
	char op;
} bexpression;
float compute1(bexpression expr);
float compute2(bexpression *expr);
int main()
{
	bexpression e;
	printf("Enter expression (op1 op2 op): \n");
	scanf("%f %f %c", &e.operand1, &e.operand2, &e.op);
	printf("compute1(): %.2f\n", compute1(e));
	printf("compute2(): %.2f\n", compute2(&e));
	return 0;
}
float compute1(bexpression expr)
{
	switch (expr.op)
	{
	case '+': return expr.operand1 + expr.operand2;
		break;
	case '-': return expr.operand1 - expr.operand2;
		break;
	case '*': return expr.operand1 * expr.operand2;
		break;
	case '/': return expr.operand1 / expr.operand2;
		break;
	default:
		break;
	}
    return -1;
}
float compute2(bexpression *expr)
{
	switch (expr->op)
	{
	case '+': return expr->operand1 + expr->operand2;
		break;
	case '-': return expr->operand1 - expr->operand2;
		break;
	case '*': return expr->operand1 * expr->operand2;
		break;
	case '/': return expr->operand1 / expr->operand2;
		break;
	default:
		break;
	}
    return -1;
}
