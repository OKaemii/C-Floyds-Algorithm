#include <stdio.h>

struct node
{
   int value = NULL;
   int * next = NULL;
};

struct node * floyd(struct node * head)
{
   // Initialise two pointers (tortoise and hare) that both point to the head of the linked list
   struct node *tortoise;
   struct node *hare;

   // Make sure the list is not empty
   if (head == NULL)
   {
      return NULL;
   }

   // Loop as long as the hare does not reach null

   // Set tortoise to next node

   // Set hare to next, next node

   // If they are at the same node, reset the tortoise back to the head

   // Have both tortoise and hare both move one node at a time until they meet again

   // Return the node in which they meet

   // Else, if the hare reaches null, then return null

   return NULL;
}

int main()
{
   floyd(NULL);

   return 0;
}
