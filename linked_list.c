//creation of singly linked list
    #include <stdio.h>
    #include <stdlib.h>
    struct node{
        int data;
        struct node*next
    };
    void linkedlist(struct node*ptr){
        while(ptr!=NULL){
        printf("element: %d",ptr->data)
        ptr=ptr->next;}
    }
    int main()
    {
        struct node*first;
        struct node*second;
        struct node*third:
        struct node*fourth;
          
        first=(struct node *)malloc(sizeof(struct node));
        second=(struct node *)malloc(sizeof(struct node));
        third=(struct node *)malloc(sizeof(struct node));
        fourth=(struct node *)malloc(sizeof(struct node));

        first->data=7;
        first->next=second;
        second->data=11;
        second->next=third;
        third->data=10;
        third->next=fourth;
        fourth->data=7;
        fourth->next=NULL;

         linkedlist(first);
    }




    //circular linked list
     #include <stdio.h>
    #include <stdlib.h>
    struct node{
        int data;
        struct node*next;
    };
    void linkedlist(struct node*first){
        
        struct node*ptr=first;
        do{
        printf("element: %d\n",ptr->data);
        ptr=ptr->next;}
        while(ptr!=first);
    }
    int main()
    {
        struct node*first;
        struct node*second;
        struct node*third;
        struct node*fourth;
          
        first=(struct node *)malloc(sizeof(struct node));
        second=(struct node *)malloc(sizeof(struct node));
        third=(struct node *)malloc(sizeof(struct node));
        fourth=(struct node *)malloc(sizeof(struct node));

        first->data=7;
        first->next=second;
        second->data=11;
        second->next=third;
        third->data=10;
        third->next=fourth;
        fourth->data=7;
        fourth->next=first;

        linkedlist(first);
    }
    
    //inserting an element in the beggining
    #include<stdio.h>
   #include<stdlib.h>
   struct node{
       int data;
       struct node*next;
   };
  void linkedlist(struct node*ptr){
      while(ptr!=NULL){
          printf("elenement %d \n",ptr->data);
          ptr=ptr->next;}
      }
      struct node*insertatfirst(struct node*first,int data){
          struct node*ptr=(struct node*)malloc(sizeof(struct node));
          ptr->next=first;
          ptr->data=data;
          return ptr;
      }
      int main(){
      struct node*first;
      struct node* second;
      struct node*third;
      struct node*fourth;
        
     first=(struct node*)malloc(sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));
     fourth=(struct node*)malloc(sizeof(struct node));
     
     first->data=7;
     first->next=second;
     
     second->data=8;
     second->next=third;
     
     third->data=9;
     third->next=fourth;
     
     fourth->data=4;
     fourth->next=NULL;
     
     first=insertatfirst(first,10);
     linkedlist(first);
  }

  //inserting element after node
   #include<stdio.h>
   #include<stdlib.h>
   struct node{
       int data;
       struct node*next;
   };
  void linkedlist(struct node*ptr){
      while(ptr!=NULL){
          printf("elenement %d \n",ptr->data);
          ptr=ptr->next;}
      }
      struct node*insertafternode(struct node*first,struct node* prevnode,int data){
          struct node*ptr=(struct node*)malloc(sizeof(struct node));
          ptr->data=data;
          ptr->next=prevnode->next;
          prevnode->next=ptr;
          return first;
      }
      int main(){
      struct node*first;
      struct node* second;
      struct node*third;
      struct node*fourth;
        
     first=(struct node*)malloc(sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));
     fourth=(struct node*)malloc(sizeof(struct node));
     
     first->data=7;
     first->next=second;
     
     second->data=8;
     second->next=third;
     
     third->data=9;
     third->next=fourth;
     
     fourth->data=4;
     fourth->next=NULL;
     
     first=insertafternode(first,third,5);
     linkedlist(first);
  }
 //inserting number at end
  #include<stdio.h>
   #include<stdlib.h>
   struct node{
       int data;
       struct node*next;
   };
  void linkedlist(struct node*ptr){
      while(ptr!=NULL){
          printf("elenement %d \n",ptr->data);
          ptr=ptr->next;}
      }
      struct node*inseratend(struct node*first,int data){
          struct node*ptr=(struct node*)malloc(sizeof(struct node));
          ptr->data=data;
          struct node*p=first;//ptr is the new node
          while(p->next!=NULL){
              p=p->next;//keep going to next until p next!=0
          }
          p->next=ptr;//store the value of ptr in p next
          ptr->next=NULL;//store the value of null in ptr next so that traversal stops.
          return first;
      }
      int main(){
      struct node*first;
      struct node* second;
      struct node*third;
      struct node*fourth;
        
     first=(struct node*)malloc(sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));
     fourth=(struct node*)malloc(sizeof(struct node));
     
     first->data=7;
     first->next=second;
     
     second->data=8;
     second->next=third;
     
     third->data=9;
     third->next=fourth;
     
     fourth->data=4;
     fourth->next=NULL;
     
     first=inseratend(first,24);
     linkedlist(first);
  }
    
  //insert at index
   #include<stdio.h>
   #include<stdlib.h>
   struct node{
       int data;
       struct node*next;
   };
  void linkedlist(struct node*ptr){
      while(ptr!=NULL){
          printf("elenement %d \n",ptr->data);
          ptr=ptr->next;}
      }
      struct node*inseratindex(struct node*first,int data,int index){
          struct node*ptr=(struct node*)malloc(sizeof(struct node));
          
          struct node*p=first;//ptr is the new node
          int i=0;
          while(i!=index-1){
              p=p->next;//keep going to next until p next!=0
              i++;
          }
          ptr->data=data;
          ptr->next=p->next;//store the value of ptr in p next
          p->next=ptr;//store the value of null in ptr next so that traversal stops.
          return first;
      }
      int main(){
      struct node*first;
      struct node* second;
      struct node*third;
      struct node*fourth;
        
     first=(struct node*)malloc(sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));
     fourth=(struct node*)malloc(sizeof(struct node));
     
     first->data=7;
     first->next=second;
     
     second->data=8;
     second->next=third;
     
     third->data=9;
     third->next=fourth;
     
     fourth->data=4;
     fourth->next=NULL;
     
     first=inseratindex(first,24,3);
     linkedlist(first);
  }

  //stacks using array
  #include <stdio.h>
#include <stdlib.h>


struct Stack 
{
    int size;
    int top;
    int * arr;
};


int isEmpty(struct Stack * ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{return 0;}
}


int isFull(struct Stack * ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{return 0;}
}

struct Stack * push (struct Stack * ptr, int val){
    if(isFull(ptr)){
       printf("Stack Overflow.\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        printf("%d added to stack.\n",val);
        return ptr;
    }
}

struct Stack * pop (struct Stack * ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow.\n");
    }
    else{
        int x = ptr->arr[ptr->top];
        ptr->top--;
        printf("%d popped from stack.\n",x);
        return ptr;
    }
}


int main () {
    struct Stack *sp = (struct Stack *)malloc(sizeof(struct Stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    // Test push and pop operations
    push(sp, 47);
    push(sp, 32);
    push(sp, 3);
    push(sp, 2);
    push(sp, 1);
    pop(sp);
    // Should show underflow

    // Free allocated memory
    free(sp->arr);
    free(sp);

    
}

