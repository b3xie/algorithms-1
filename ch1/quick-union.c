#include <stdio.h>

void main(){
    int id[10];
    int size = sizeof(id) / sizeof(id[0]);
    printf("size of array: %d\n", a);

    //set each element as it's own root
    for (int i = 0; i < size; i++){
        id[i] = i;
    };
    
    //find root of element
    int root(int e){
        while(e != id[e]){ 
            e = id[e];
            };
        return e;
    }
    //implement union operation
    void union(int p, int q){
        int i = root(p);
        int j = root(q);
        id[i] = j;
    }   

}

