/* 
** c programe which displays the adressbook(contact info)
*/


#define NAME_MAX 30
#define SEX_MAX 5
#define NUM_MAX 12
#define ADDR_MAX 30
#define MAX 1000

#include <stdio.h>
#include <string.h>
void menu()
{
	printf("\n");
	printf("1. add      2. del\n");
	printf("3. search   4. show \n");
	printf("0. exit\n");
}

enum Option
{
	EXIT,   //0
	ADD,    //1
	DEL,    //2
	SEARCH, //3
	SHOW    //5
};


struct contact_Info
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char phone_number[NUM_MAX];
	char address[ADDR_MAX];
};

struct Contact
{
	struct contact_Info data[MAX];
	int sz;
};
void InitContact(struct Contact* pc)
{
	pc->sz = 0;
}

void AddContact(struct Contact* pc);//Add a contact 

void DelContact(struct Contact* pc);//Delete specified contact

void SearchContact(const struct Contact* pc);//Find the specified contact

void ShowContact(struct Contact* pc);//Show all contacts

int main()
{
	int input = 0;
	struct Contact con;//Create an address book
	InitContact(&con);//Initialize address book

	do
	{
		menu();
		printf("Please select:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			printf("Exit address book\n");
			break;
		default:
			printf("Selection error\n");
			break;
		}
	} while (input);
	return 0;
}
// function which adds the contact info to a adressbook
void AddContact(struct Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("The address book is full and cannot be added\n");
	}
	else
	{
		printf("Please enter your name:");
		scanf("%s", pc->data[pc->sz].name);
		printf("Please enter age:");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("Please enter gender:");
		scanf("%s", pc->data[pc->sz].sex);
		printf("Please enter phone number:");
		scanf("%s", pc->data[pc->sz].phone_number);
		printf("Please enter address:");
		scanf("%s", pc->data[pc->sz].address);

		printf("Added successfully\n");
		pc->sz++;
	}
}
// function to find the contact by searching with name
int FindContactByName(const struct Contact* pc, const char* name)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
// function to delete the specific contact info
void DelContact(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("The address book is empty and cannot be deleted\n");
		return;
	}
	char name[NAME_MAX] = { 0 };
	printf("Please enter the name of the person to delete:");
	scanf("%s", name);
	//lookup
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("The specified contact does not exist\n");
	}
	else
	{
		//delete
		int j = 0;
		for (j = pos; j < pc->sz-1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("Delete succeeded\n");
	}
}
// function which searches the contact with name
void SearchContact(const struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("Please enter the name of the person you want to find:");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("No one was found\n");
	}
	else
	{
		printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "phone_number", "address");
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].phone_number,
			pc->data[pos].address);
	}
}
//function which displays the all the contact info in a addressbook
void ShowContact(struct Contact* pc)
{
	int i = 0;
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n","name","age","sex","phone_number","address");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].phone_number,
			pc->data[i].address);
	}
}