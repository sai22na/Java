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

         return linkedlist(first);
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
