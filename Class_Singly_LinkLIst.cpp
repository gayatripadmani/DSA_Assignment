// Implement all the functions of the linked list and initialize head inside main function.

#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;

        node()
        {
            next = NULL;
        }
};

class LinkList
{
    node *head; 

    public:
        LinkList()
        {
            head = NULL;
        }

    void inseratbegining(int data)
    {
        node *temp = new node();
        temp->data = data;
        temp->next = head;
        head = temp;
    }

    void insertatend(int data)
    {
        node *temp = new node();
		temp->data = data;
		
        if (head == NULL)
        {
			head = temp;
		}
		else
        {
			node *ptr = head;
			
            while (ptr->next != NULL)
            {
				ptr = ptr->next;
			}
			ptr->next = temp;
		}
    }

    void insertatpos(int data, int key)
    {
        node *temp = new node();
        temp->data = data;

        if(key == 0)
        {
            temp->next = head;
            head = temp;
        }
        else
        {
            node *ptr = head;
            while(key > 1)
            {
                ptr = ptr->next;
                --key;
            }
            temp->next = ptr->next;
            ptr->next = temp;
        }
    }

    void deleteatbegining()
    {
        if(head == NULL)
        {
            cout << endl << "List is empty";
        }
        else
        {
            cout << endl << "Element Deleted : " << head->data << endl;
            node *temp = head;
            head = head->next;
            delete(temp);
        }
    }

    void deleteatend()
    {
        if(head == NULL)
        {
            cout << endl << "List is empty";
        }
        else
        {
            node *temp = head;
            while(temp->next->next != NULL)
            {
                temp = temp->next;
            }
            cout << endl << "Element Deleted : " << temp->next->data << endl;
            delete(temp->next);
            temp->next = NULL;
        }
    }

    void deleteatpos(int key)
    {
        if(head == NULL)
        {
            cout << endl << "List is empty";
        }
        else
        {
            node *temp, *ptr;
            if(key == 0)
            {
                cout << endl << "Elemetnt deleted : " << head->data << endl;
                ptr = head;
                head = head->next;
                delete(ptr);
            }
            else
            {
                temp = ptr = head;
                while(key > 0)
                {
                    --key;
                    temp = ptr;
                    ptr = ptr->next;
                }
                cout << endl << "Element Deleted : " << ptr->data << endl;
                temp->next = ptr->next;
                free(ptr);
            }
        }
    }

    void display()
    {
        if(head == NULL)
        {
            cout << endl << "List is empty";
        }
        else
        {
            node *temp = head;
            cout << endl << "Linked List : ";
            while(temp != NULL)
            {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }
};

int main()
{
    cout << endl << "1. Insert at the beginning";
    cout << endl << "2. Insert at the end";
    cout << endl << "3. Insert at the mid";
    cout << endl << "4. Delete at the beginning";
    cout << endl << "5. Delete at the end";
    cout << endl << "6. Delete at the mid";
    cout << endl << "7. Display";
    cout << endl << "0. Exit" << endl;

    int ch, data, key;
    LinkList ll;

    do
    {
        cout << endl << "Enter Your Choice : ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                cout << endl << "Enter Element : ";
                cin >> data;
                ll.inseratbegining(data);
                break;

            case 2:
				cout << endl << "Enter Element : ";
				cin >> data;
				ll.insertatend(data);
				break;
				
			case 3:
				cout << endl << "Enter Element : ";
				cin >> data;
				cout << endl << "Enter Position ( zero-indexed ) : ";
				cin >> key;
				ll.insertatpos(data, key);
				break;
				
			case 4:
				ll.deleteatbegining();
				break;
				
			case 5:
				ll.deleteatend();
				break;
				
			case 6:
				cout << endl << "Enter Position ( zero-indexed ) : ";
				cin >> key;
				ll.deleteatpos(key);
				break;
				
			case 7:
				ll.display();
				break;
        }

    } while (ch != 0);
    
}