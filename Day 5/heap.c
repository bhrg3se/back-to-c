//
// Created by Bhargab Acharya on 04/06/2024.
//

void heapify(int arr[128],int last){
    for (int i = 0; i <=last; i++){
        int child1 = arr[i*i];
        int child2 = arr[(i*i)+1];

        if (arr[i]>child1){
            int temp = arr[i];
            arr[i] = child1;
            child1=temp;
        }
        if (arr[i]>child2){
            int temp = arr[i];
            arr[i] = child2;
            child2 = temp;
        }
        i++;
    }
}

