#include <stdio.h>

int main(void) {
    
    int t, n=0;
    int arr[10];
    
    for(int i=0; i<10; i++) {
        scanf("%d", &t);
        arr[i] = (t % 42);
    }
    
    for(int i=0; i<10; i++) {
        int cnt=0; 
        for(int j=i+1; j<10; j++) {
            if(arr[i] == arr[j]) cnt++;
        }
        if (cnt == 0) n++;
    }
    
   printf("%d", n);
}