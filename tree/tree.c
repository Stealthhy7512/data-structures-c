#include <stdlib.h>
#include <stdio.h>
#include "tree.h"

tree_t* make_tree() {
  tree_t* root = malloc(sizeof(tree_t));
  root->left = NULL;
  root->right = NULL;
}