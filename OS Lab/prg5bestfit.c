#include<stdio.h>
#define max 25
void main()
{
    int frag[max] , b[max] , f[max] , i ,j,nb,nf,temp,lowest = 10000;
    static int bf[max] , ff[max];

    printf("\n\n Memory Managnment Scherme - best fit");
    printf("Enter no of blocks: ");
    scanf("%d",&nb);
    printf("Enter the number of files:"); 
    scanf("%d",&nf);

    printf("\nEnter the size of the blocks:-\n");
    for(i=1;i<=nb;i++)
    {
        printf("Block %d:",i); 
        scanf("%d",&b[i]);
    }

    printf("Enter the size of the files :-\n"); 
    for(i=1;i<=nf;i++) 
    { 
        printf("File %d:",i); 
        scanf("%d",&f[i]); 
    }

    for (i = 1 ; i<nf ; i++)
    {
        for (j = 1 ; j<nb ; j++)
        {
            if (bf[j] != 1)
            {
                temp = b[j] - f[i];
                if (temp >=0)
                    if (lowest>temp)
                    {
                        ff[i] = j;
                        lowest = temp;
                    }
            }
        }
        frag[i] = lowest;
        bf[ff[i]]= 1;
        lowest = 10000;
    }
    printf("File NO: \t file Size: \t block no; \t block size: \t Fragements");
    for (i =1 ; i<=nf ; i++)
    {
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],b[ff[i]],frag[i]);
    }

    
}
