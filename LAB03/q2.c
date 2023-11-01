#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* name;
    int rno;
    float cg;
} student;

void readstudents(student* st) {
    st->name = (char*)malloc(50 * sizeof(char)); 
    printf("Enter name: ");
    scanf("%s", st->name);
    printf("Enter rno and cg: ");
    scanf("%d %f", &st->rno, &st->cg); 
}

void display(student* st) {
    printf("Name: %s\n", st->name);
    printf("Roll No.: %d\n", st->rno);
    printf("CGPA: %.2f\n", st->cg); 
}

void sort(student* s, int n){
    int min;
    
    for(int i = 0; i< n-1; i++){
        min = i;
        for(int j = i+1; j< n; j++){
            if(s[j].rno < s[min].rno) min = j;
            if(min != i){
                student temp = s[i];
                s[i] = s[min];
                s[min] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    student* s = (student*)malloc(n * sizeof(student));
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        readstudents(&s[i]);
    }

    sort(s, n);
    for (int i = 0; i < n; i++) {
        display(&s[i]);
        printf("\n");
        free(s[i].name); 
    }

    free(s); 
    return 0;
}
