/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *mergeTwoSortedLinkedLists(Node *h1, Node *h2)
{
    //Write your code here
    Node *fh=NULL,ft=NULL;
    if(h1->data<h2->data){
        fh=h1;
        ft=h1;
        h1=h1->next;
        fh->next=ft;
    }else { 
        fh=h2;
        ft=h2;
        h2=h2->next;
        fh->next=ft;
    }
    while(h1!=NULL && h2!=NULL){
        if(h1->data<h2->data){
            ft->next=h1;
            ft=h1;
            h1=h1->next;
        }else{
            ft->next=h2;
            ft=h2;
            h2=h2->next;
        }
    }
    while(h1!=NULL){
        ft-next=h1;
        ft=h1;
        h1=h1->next;
    }
    while(h2!=NULL){
        ft->next=h2;
        ft=h2;
        h2=h2->next;
    }
    return fh;

}