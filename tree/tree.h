#ifndef TREE_H
#define TREE_H

typedef struct s_tree_node {
  void* value;
  struct s_tree_node* left;
  struct s_tree_node* right;
} tree_t;

tree_t* make_tree();
void preorder(tree_t*);
void inorder(tree_t*);
void postorder(tree_t*);
void level_order(tree_t*);

#endif