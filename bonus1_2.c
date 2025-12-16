#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    if (score < 0 || score > 100) {
        printf("error score");
    } 
    else { // ถ้าคะแนนปกติ ให้ทำตรรกะเดิม
        if (score >= 68) {
            // A B C
            if(score >= 85)
                printf("A");
            else if(score >= 75)
                printf("B");
            else {
                printf("C");
                printf("\nNeed %d more for B", 75 - score); 
            }
        } else {
            // D F
            if(score >= 55)
                printf("D");
            else
                printf("F");
        }
    }
    return 0;
}
