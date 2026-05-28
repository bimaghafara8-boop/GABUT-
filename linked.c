#include <stdio.h>
#include <stdlib.h>

struct Node {
  int number;
  struct Node *next;
};

struct Node *simpan(int data) {
  struct Node *mlc = malloc(sizeof(struct Node));
  mlc->number = data;
  mlc->next = NULL;
  
  return mlc;
}

int main() {
  struct Node *a = simpan(10);
  struct Node *b = simpan(20);
  struct Node *c = simpan(30);
  struct Node *d = simpan(40);
  struct Node *e = simpan(50);
  
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;
  e->next = NULL;
  
  struct Node *stosw = a;
  int i = 0;
  while (stosw != NULL) {
    printf("data-%d: %d\n", i, stosw->number);
    stosw = stosw->next;
    i++;
  }

  return 0;
}