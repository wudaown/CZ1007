#include <stdio.h>
#include <string.h>
#pragma clang diagnostic push
#pragma clang diagnostic pop
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#define MAX 100
typedef struct {
	char name[20];
	char telno[20];
} PhoneBk;
int readin(PhoneBk *p);
void search(PhoneBk *p, int size, char *target);
int main()
{
	PhoneBk s[MAX];
	char t[20];
	int size;
	size = readin(s);
	printf("Enter search name: \n");
	gets(t);
	search(s, size, t);
	return 0;
}
int readin(PhoneBk *p)
{	
	int count = 0;
    do{
		printf("Enter name\n");
        scanf("%s", p->name);
        if ( strcmp(p->name,"#") != 0){
            printf("Enter number\n");
            scanf("%s",p->telno);
            count++;
            p++;
        }
        else break;
    } while (strcmp(p->name,"#") != 0);
//	do
//	{
//		printf("Enter name\n");
//		gets(p->name);
//		if (strcmp(p->name,"#") != 0)
//		{
//		    printf("Enter number\n");
//		    gets(p->telno);
//		    count++;
//		    p++;
//		}
//        else
//        {
//            break;
//        }
//	} while (1);
	return count;
}
void search(PhoneBk *p, int size, char *target)
{	
	int i;
	for ( i = 0; i < size; i++)
	{
		if (strcmp(p->name,target) == 0)
		{
			printf("Name = %s , Tel = %s \n", p->name, p->telno);
			break;
		}
		p++;
	}
	if (i == size)
	{
		printf("Name not found");
	}
}
