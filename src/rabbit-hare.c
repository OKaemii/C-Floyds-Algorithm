#include <stdio.h>

struct node
{
   int value = NULL;
   struct node *next = NULL;
};

struct node *floyd(struct node *head)
{
   // Initialise two pointers (tortoise and hare) that both point to the head of the linked list
   struct node *tortoise;
   struct node *hare;

   // Make sure the list is not empty
   if (head == NULL)
   {
      return NULL;
   }

   tortoise = head;
   hare = head;

   // Loop as long as the hare does not reach null
   while ((hare->next != NULL) && (hare->next->next != NULL))
   {
      // Set tortoise to next node
      tortoise = tortoise->next;
      // Set hare to next, next node
      hare = hare->next->next;

      // If they are at the same node, reset the tortoise back to the head
      if (tortoise == hare)
      {
         tortoise = head;

         // Have both tortoise and hare both move one node at a time until they meet again
         while (tortoise != hare)
         {
            tortoise = tortoise->next;
            hare = hare->next;
         }

         // Return the node in which they meet
         return (hare);
      }
   }

   // Else, if the hare reaches null, then return null
   return NULL;
}

int main()
{
   floyd(NULL);

   return 0;
}
