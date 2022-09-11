/* linked list using two-pointers. one is slow and one is fast.
Move one pointer by one and the other pointers by two. 
When the fast pointer reaches the end, the slow pointer will reach the middle of the linked list.*/

#include <iostream>
using namespace std;

class node{
	public:
		int data;
		node *next;
};

class nodeop{
public:

	void insertnode(class node** head, int val){
	
		class node *nn = new node();
		
		nn->data = val;
		
		nn->next = *head;
		
		*head = nn;
	}
	
	void display(class node *head){
		while(head != NULL){
			cout << head->data << " -> ";
			head = head->next;
		}
		cout << "NULL" << endl;
	}
	
	void displayMid(class node *head){
		struct node *slow = head;
		struct node *fast = head;

		if (head!=NULL)
		{
			while (fast != NULL && fast->next != NULL)
			{
				fast = fast->next->next;
				slow = slow->next;
			}
			cout << endl <<  " Display Middle value of List : [" << slow->data << "]" << endl;
		}
	}
};

int main(){
	class node *head = NULL;
	class nodeop *temp = new nodeop();
	
    for(int i=5; i>0; i--){
		temp->insertnode(&head, i);
	}

    cout << endl << " Display List : ";
    temp->display(head);
    temp->displayMid(head);
    
	return 0;
}
