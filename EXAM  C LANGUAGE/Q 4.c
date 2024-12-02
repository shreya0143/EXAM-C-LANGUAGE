 #include <stdio.h>

#define NUM_STUDENTS 5


int check_pass_fail(int marks[]) {
    for (int i = 0; i < 5; i++) {
        if (marks[i] < 33) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int roll_number, maths, science, gujarati, english, hindi;
    int total_marks, total_percentage;
    char standard[10];

    
    for (int i = 0; i < NUM_STUDENTS; i++) {
        
        printf("\nEnter Roll Number for Student %d: ", i + 1);
        scanf("%d", &roll_number);

        printf("Enter Standard (e.g., 10th, 11th, etc.): ");
        scanf("%s", standard);


        printf("Enter Marks for Maths (Out of 50): ");
        scanf("%d", &maths);
        printf("Enter Marks for Science (Out of 50): ");
        scanf("%d", &science);
        printf("Enter Marks for Gujarati (Out of 50): ");
        scanf("%d", &gujarati);
        printf("Enter Marks for English (Out of 50): ");
        scanf("%d", &english);
        printf("Enter Marks for Hindi (Out of 50): ");
        scanf("%d", &hindi);

        
        total_marks = maths + science + gujarati + english + hindi;
        total_percentage = (total_marks * 100) / 250; 
       
        printf("\n\n--- Student Result ---\n");
        printf("Roll Number: %d\n", roll_number);
        printf("Standard: %s\n", standard);
        printf("Maths: %d out of 50\n", maths);
        printf("Science: %d out of 50\n", science);
        printf("Gujarati: %d out of 50\n", gujarati);
        printf("English: %d out of 50\n", english);
        printf("Hindi: %d out of 50\n", hindi);
        printf("Total Marks: %d out of 250\n", total_marks);
        printf("Total Percentage: %d%%\n", total_percentage);

        
        if (check_pass_fail((int[]){maths, science, gujarati, english, hindi})) {
            printf("STUDENT IS PASSED!!!\n");
        } else {
            printf("STUDENT IS FAILED!!!\n");
        }
    }

    return 0;
}
