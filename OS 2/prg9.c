// PROGRAM 9: Develop a C program to simulate the Linked file allocation strategies. 

#include <stdio.h> 
#include <stdlib.h> 
int main()
{ 
    int f[50], st, len, c, k,fn=0; 
    for (int i = 0; i < 50; i++) 
        f[i] = 0; 
    /* printf("Enter how many blocks already allocated: "); 
    scanf("%d", &p); 
    printf("Enter blocks already allocated: "); 
    for (i = 0; i < p; i++) { 
        scanf("%d", &a); 
        f[a] = 1; 
    }*/ 

    x: 
    fn=fn+1;     
    printf("Enter index starting block and length: "); 
        scanf("%d%d", &st, &len); 
    k = len; 

    if (f[st] == 0) 
    { 
        for (int j = st; j < (st + k); j++)
        { 
            if (f[j] == 0) 
            { 
                f[j] = fn; 
                printf("%d-------->%d\n", j, f[j]); 
            } 
            else{ 
                printf("%d Block is already allocated \n", j); 
                k++; 
            }
        } 
    } 
    else 
        printf("%d starting block is already allocated \n", st); 
    printf("Do you want to enter more file(Yes - 1/No - 0)"); 
    scanf("%d", &c); 
    if (c == 1) 
        
        goto x; 
    else 
        exit(0); 
return 0; 
} 
