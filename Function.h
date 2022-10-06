#ifndef FUNCTION_H
#define FUNCTION_H
typedef struct Customer     //Customer Structure
{
	char customer_id[15];
	int aadhar_no;
	char name[30];
	char password[10];
	char account_type[10];
	double balance;
	struct Customer *next;
}customer;

typedef struct Transaction  //Transaction structure
{
	char saccount[15];
	char daccount[15];
	double amt;
	struct Transaction *next;
}transact;

transact *start1,*last1,*new1,*ptr1,*prev1;  //Declaring pointers for transaction structure

//Function Declaration of menus and submenus
int createAccount();
int doTransaction();
int viewBalance();
int editCustomer();
int deleteCustomer();
int doTransfer();
int getTransactionReport();
int getCustomerReport();
int customer_file_to_list();
int customer_list_to_file();
int banker_file_to_list();
int banker_list_to_file();
customer *start,*last,*new2,*ptr,*prev;           //Declaring pointers for customer structure

ssize_t password(char **pw,size_t sz,int mask,FILE *fp);
//Function Declaration of password
int checkpassword();
char *getpassword();
char *pt;
#endif

