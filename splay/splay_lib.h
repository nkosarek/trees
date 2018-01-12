#ifndef _SPLAY_LIB_H_
#define _SPLAY_LIB_H_

typedef struct splay_tree splay_tree_t

struct splay_tree {
    splay_tree_t *parent;
    splay_tree_t *right;
    splay_tree_t *left;
    int value;
};

splay_tree_t *splay_find( splay_tree_t *T, int value );
void splay_insert( splay_tree_t *T, int value );
void splay_delete( splay_tree_t *T, int value );

splay_tree_t *splay_join( splay_tree_t *T, splay_tree_t *S );
splay_tree_t *splay_split( splay_tree_t *T );

#endif /* _SPLAY_LIB_H_ */
