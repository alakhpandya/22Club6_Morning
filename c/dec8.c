/*
1. Ask marks of 5 students from user and then ask user which student's marks do they want to see. Print marks of that student only.
2. Take a 3x3 matrix as input from user and print it in a way that it looks like a 3x3 matrix.
3. Take two 3x3 matrix from user, add them and store the resultant matrix. Print the resultant matrix.
*/

#include<stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j, sum, k;
    
    printf("Enter 9 integers for matrix A:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 9 integers for matrix B:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(k=0; k<3; k++){
        for(i=0; i<3; i++){
            sum = 0;
            for(j=0; j<3; j++){
                sum += a[k][j] * b[j][i];
            }
            c[k][i] = sum;
            // printf("%d\t", sum);
        }
        // printf("\n");
    }

    printf("Resultant Matrix =\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
1. Upgrade the above program for nxn matrix, where n will be given by user.
2. Take a 3x3 matrix from user and store transpose of it in another matrix. Print both the matrices.
3. Take a 3x3 matrix from user and print its determinant.
*/