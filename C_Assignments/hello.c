#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    char a;
    struct node *next;
};

struct node* create(int val){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->val = val;
    new->next = NULL;
    return new;
}
struct node* add_front(int val,struct node *head){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->val = val;
    new->next = NULL;
    new->next=head;
    return new;
}
struct node* append(int val,struct node *head){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->val = val;
    new->next = NULL;
    struct node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new;
    if (head==NULL){
        return new;
    }
    return head;
}
struct node* insert(int val,int ind,struct node *head){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->val = val;
    struct node *temp=head;
    if(head==NULL){
        new->next=NULL;
        return new;
    }
    for(int i=0;i<ind-1;i++){
        temp=temp->next;
    }
    new->next=temp->next;
    temp->next=new;
    
    return head;
}
int main() {
    int n;
    struct node *head = NULL, *prev = NULL;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        struct node* temp = create(x);
        if (i == 0) {
            head = temp;
        } else {
            prev->next = temp;
        }
        prev = temp;
    }
    head=add_front(10,head);
    head=append(10,head);
    head=insert(10,3,head);
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ", temp->val);
        temp = temp->next;
    }
    
    while(temp != NULL){
        struct node *next = temp->next;
        free(temp);
        temp = next;
    }
    
    return 0;
}
