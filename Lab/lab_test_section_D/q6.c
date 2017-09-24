#include <stdio.h>
typedef struct {
	int id; /* staff identifier */
	int totalLeave; /* the total number of days of leave allowed */
	int leaveTaken; /* the number of days of leave taken so far */
} leaveRecord;
int mayTakeLeave(leaveRecord list[], int id, int leave, int n);
void getInput(leaveRecord list[], int *n);
void printList(leaveRecord list[], int n);
int main()
{
	leaveRecord listRec[10];
	int len;
	int id, leave, canTake = -1;
	getInput(listRec, &len);
	printList(listRec, len);
	printf("Please input id, leave to be taken: \n");
	scanf("%d %d", &id, &leave);
	canTake = mayTakeLeave(listRec, id, leave, len);
	if (canTake == 1)
		printf("The staff %d can take leave\n", id);
	else if (canTake == 0)
		printf("The staff %d cannot take leave\n", id);
	else
		printf("The staff %d is not in the list\n", id);
	return 0;
}
void getInput(leaveRecord list[], int *n)
{
	int i;
	printf("Enter the number of record\n");
	scanf("%d", n);
	for ( i = 0; i < *n; i++)
	{
		printf("Enter id, totalleave, leavetaken:\n");
		scanf("%d %d %d", &list[i].id, &list[i].totalLeave, &list[i].leaveTaken);
	}
}
int mayTakeLeave(leaveRecord list[], int id, int leave, int n)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		if (list[i].id == id)
		{
			if (list[i].totalLeave - list[i].leaveTaken >= leave)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
    return -1;
}
void printList(leaveRecord list[], int n)
{
	int p;
	printf("The staff list:\n");
	for (p = 0; p < n; p++)
		printf("id = %d, totalleave = %d, leave taken = %d\n",
			list[p].id, list[p].totalLeave, list[p].leaveTaken);
}
