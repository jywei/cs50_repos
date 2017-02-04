typedef struct sllist
{
    VALUE val;
    struct sllist* next;
}
sllnode;

// create a linked list

sllnode* create(VALUE val);

// serach an element in a linked list

bool find(sllnode* head, VALUE val);

// insert an element in the begining of the linked list

sllnode* insert(sllnode* head, VALUE val);

// delete

void destroy(sllnode* head);

