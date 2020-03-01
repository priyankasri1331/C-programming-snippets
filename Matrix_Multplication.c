#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int matrix_size_ret(char *path,int *size);
int matrix_ret(char *path,float *mat_pointer,int mat_size);
int index_ret(int row_num,int col_num,int num_of_col);

int main()
{
    int sizeA[2],sizeB[2];
    int mat_size_A,mat_size_B,mat_size_C;
    float *mat_pointer_A,*mat_pointer_B;
    int i,j,k;
    int num1,num2;

    //Obtain the size of Matrices A and B
    matrix_size_ret("C:\\Users\\Priya\\Desktop\\courses_TAMU\\Sem_2\\MSD_4.10-5_12.45-2.35\\HW\\HW2\\A.txt",sizeA);
    matrix_size_ret("C:\\Users\\Priya\\Desktop\\courses_TAMU\\Sem_2\\MSD_4.10-5_12.45-2.35\\HW\\HW2\\B.txt",sizeB);

    mat_size_A = sizeA[0] * sizeA[1];
    mat_size_B = sizeB[0] * sizeB[1];
    mat_size_C = sizeA[0] * sizeB[1];

    //allocate necessary memory for matrices A and B
    mat_pointer_A = (float *)malloc(mat_size_A * sizeof(float));
    mat_pointer_B = (float *)malloc(mat_size_B * sizeof(float));

    float matrix_C[sizeA[0]][sizeB[1]];

    //Fill in the values from the text files in the memory allocation allotted
    matrix_ret("C:\\Users\\Priya\\Desktop\\courses_TAMU\\Sem_2\\MSD_4.10-5_12.45-2.35\\HW\\HW2\\A.txt",mat_pointer_A,mat_size_A);
    matrix_ret("C:\\Users\\Priya\\Desktop\\courses_TAMU\\Sem_2\\MSD_4.10-5_12.45-2.35\\HW\\HW2\\B.txt",mat_pointer_B,mat_size_B);

    //Matrix multiplication
    if (sizeA[1]!= sizeB[0])
    {
        //Multiplication not possible
        FILE *fp2;
        fp2 = fopen("C:\\Users\\Priya\\Desktop\\courses_TAMU\\Sem_2\\MSD_4.10-5_12.45-2.35\\HW\\HW2\\Cout.txt","w");
        fprintf(fp2,"%s","Error - Number of columns in first matrix should be equal to number of rows in second matrix");
        printf("Error - Number of columns in first matrix should be equal to number of rows in second matrix\n");

        exit(1);
    }
    else
    {
        FILE *fp2;
        fp2 = fopen("C:\\Users\\Priya\\Desktop\\courses_TAMU\\Sem_2\\MSD_4.10-5_12.45-2.35\\HW\\HW2\\Cout.txt","w");
        fprintf(fp2,"%d %d\n",sizeA[0],sizeB[1]);
        for(i=0;i<sizeB[1];i++)
        {
            for(j=0;j<sizeA[0];j++)
            {
                matrix_C[i][j] = 0;
                for(k=0;k<sizeB[0];k++)
                {
                    num1 = index_ret(i,k,sizeA[1]); //get the index of matrixA
                    num2 = index_ret(k,j,sizeB[1]); //get the index of matrixB
                    matrix_C[i][j] += mat_pointer_A[num1] * mat_pointer_B[num2];
                }
                fprintf(fp2,"%f ",matrix_C[i][j]);
            }
            //printf("\n");
        }
        fclose(fp2);
    }

    free(mat_pointer_A);
    free(mat_pointer_B);

    return 0;
}
/*Function fills in the size of the given matrix in size array. The 0th element
has number of rows*/

int matrix_size_ret(char *path,int *size)
{
    FILE *fp1;
    int num;
    fp1 = fopen(path,"r");
    int count = 0;
    while(!feof(fp1))
    {
    count++;
    fscanf(fp1,"%d",&num);
    if(count == 1)
    {
        *(size) = num;
    }
    if(count == 2)
    {
        *(size+1) = num;
        fclose(fp1);
        return 0;
    }
    }
    return 0;
}

/*Function fills in the matrix elements in memory allocated from main program.
Parameters are file path,pointer to address given by malloc function and matrix size*/

int matrix_ret(char *path,float *mat_pointer,int mat_size)
{
    FILE *fp1;
    float num;
    fp1 = fopen(path,"r");
    int count = 0;
    while(!feof(fp1))
    {
    count++;

    fscanf(fp1,"%f",&num);
    if(count >= 3)
    {
        *(mat_pointer+(count-3)) = num;
    }
    }
    fclose(fp1);
    return 0;
}

/*Returns the dereferencing index given row number,
column number and number of columns*/

int index_ret(int row_num,int col_num,int num_of_col)
{
    return (row_num*num_of_col+col_num);
}

