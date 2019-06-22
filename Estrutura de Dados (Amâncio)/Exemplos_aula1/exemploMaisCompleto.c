#include <stdlib.h>
#include <stdio.h>

typedef struct C {
	char* name;
	char* address;
} Contact;

typedef struct {
	 Contact* contacts;
	 int lastPosition;
	 int maxSize;
} AddressBook;

Contact create_contact (char* name, char* address){
	Contact c;
	c.name = name;
	c.address = address;

	return c;
}

void init_address_book(AddressBook *a, int size){
	a->contacts = (Contact*) malloc (sizeof(Contact) *size);
	a->lastPosition = 0;
	a->maxSize = size;
}

int insert_address_book (AddressBook* a, Contact c) {

	int last = a->lastPosition;

	if(last >= a->maxSize)
		//Uma outra abordagem seria realocar a lista e ai inserir o elemento
		return 0;
	else{
		a->contacts[last] = c;
		a-> lastPosition = a -> lastPosition +1;
		return 1;
	}
}

void print_address_book (AddressBook* a){
	int i =0;

	while(i< a->lastPosition){
		printf("Name: %s\nAddress: %s\n\n",a->contacts[i].name,a->contacts[i].address);
		printf("=================================================\n");
		++i;
	}
}

int main (void){

	AddressBook* ab;
	Contact c;

	ab = (AddressBook*) malloc (sizeof(AddressBook));

	init_address_book(ab, 2);

	c = create_contact("Vanessa","Sao Carlos");
	if(insert_address_book(ab, c) == 0)
		printf("\nERROR adding the contact\n");

	c = create_contact("Isabela","Uberlandia");
	if(insert_address_book(ab, c) == 0)
		printf("\nERROR adding the contact\n");

	c = create_contact("ErrorUser","X");
	if(insert_address_book(ab, c) == 0)
		printf("\nERROR adding the contact\n\n");

	printf("\nThe full list is:\n\n================================================= \n");
	print_address_book(ab);


	return 0;
}