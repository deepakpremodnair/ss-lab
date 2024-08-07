#include <stdio.h>
#include <string.h>

int main()
{
    int n, b[10], indexBlock[10], c[10][10];
    char name[10][50], fname[50];
    printf("Enter the number of files to be allocated: ");#include <stdio.h>
#include <string.h>

int main()
{
    int n, b[10], indexBlock[10], c[10][10];
    char name[10][50], fname[50];
    printf("Enter the number of files to be allocated: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter the name of file-%d: ", i+1);
        scanf("%s", name[i]);
        printf("Enter the number of blocks(length) of file-%d: ", i+1);
        scanf("%d", &b[i]);
        printf("Enter the starting index block of file-%d: ", i+1);
        scanf("%d", &indexBlock[i]);
        for(int j = 0; j < b[i]; j++)
        {
            printf("Enter block number for block %d of file-%d: ", j+1, i+1);
            scanf("%d", &c[i][j]);
        }
    }

    printf("\nFile Allocation Table\n");
    printf("Filename\tIndexBlock\tLength\n");

    for(int i = 0; i < n; i++)
    {
        printf("%s\t\t%d\t\t%d\n", name[i], indexBlock[i], b[i]);
    }

    printf("Enter the file name to search: ");
    scanf("%s", fname);

    for(int i = 0; i < n; i++)
    {
        if(strcmp(fname, name[i]) == 0) 
        {
            printf("\n\nFile name: %s\n", fname);
            printf("File length: %d\n", b[i]);
            printf("Index block: %d\n", indexBlock[i]);
            printf("The blocks allocated: ");
            for(int j = 0; j < b[i]; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
            break;
        }
    }

    return 0;
}

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter the name of file-%d: ", i+1);
        scanf("%s", name[i]);
        printf("Enter the number of blocks(length) of file-%d: ", i+1);
        scanf("%d", &b[i]);
        printf("Enter the starting index block of file-%d: ", i+1);
        scanf("%d", &indexBlock[i]);
        for(int j = 0; j < b[i]; j++)
        {
            printf("Enter block number for block %d of file-%d: ", j+1, i+1);
            scanf("%d", &c[i][j]);
        }
    }

    printf("\nFile Allocation Table\n");
    printf("Filename\tIndexBlock\tLength\n");

    for(int i = 0; i < n; i++)
    {
        printf("%s\t\t%d\t\t%d\n", name[i], indexBlock[i], b[i]);
    }

    printf("Enter the file name to search: ");
    scanf("%s", fname);

    for(int i = 0; i < n; i++)
    {
        if(strcmp(fname, name[i]) == 0) 
        {
            printf("\n\nFile name: %s\n", fname);
            printf("File length: %d\n", b[i]);
            printf("Index block: %d\n", indexBlock[i]);
            printf("The blocks allocated: ");
            for(int j = 0; j < b[i]; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
            break;
        }
    }

    return 0;
}
