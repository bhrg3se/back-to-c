//
// Created by Bhargab Acharya on 31/05/2024.
//


typedef struct Node{
    struct Node * parent;
    struct Node * child;
    char * value;

    void (*insert)(char *);
} Node;



int strcmp(char* a,char* b){
    for (int i =0;i<1000;i++){
        if (a[i]!=b[i]){
            return 0;
        }
        if (a[i] == '\00'){
            return 1;
        }
    }
}

void insert(Node * starting_node,char * value, int index){
    int count = 0;
    Node *temp = starting_node;
    while (count!=index){
        temp = temp->child;
        count++;
    }
    Node *next = temp->child;
    Node newNode = {temp,next,value};
    temp->child = &newNode;
    if (next){
        next->parent = &newNode;
    }
}

Node * find_first(Node * starting_node,char * value){
    Node * temp =starting_node;
    while (!strcmp(temp->value,value)){
        if (!temp->child){
            return 0;
        }
        temp = temp->child;
    }
    return temp;
}


Node * get(Node * starting_node,int i){
    Node * temp =starting_node;
    int count = 0;
    while (count!=i){
        if (!temp->child){
            return 0;
        }
        temp = temp->child;
        count++;
    }
    return temp;
}





int main(){



}