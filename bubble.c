#include <stdio.h>
#define N 20
int bubble(int n);
int i,j,A[N];
main()          
{
int jml;
        printf("\t METODE BUBBLE SORT \n\n");
        printf("Masukkan jumlah bilangan: ");
        scanf("%d",&jml);
        printf("\n");
// input data
                        for (i=0;i<jml;i++)
                        {
                        printf("Bilangan ke %d : ",i+1);
                        scanf("%d",&A[i]);
                        }
                        printf("\n");
        // mengurutkan data
                        bubble(jml);
        // menampilkan data
                        printf("Data yang sudah terurut : \n");
                                        for (i=0;i<jml;i++)
                        {
printf("%d\n",A[i]);
                        }
        }
        // fungsi bubble
        int bubble(int n)
        {
        int temp;
        for (i=1;i<=n-1;i++)
        {
        for (j=i;j<n;j++)
        {
                        if (A[i-1]>A[j])
                        {
                        temp = A[i-1];
                        A[i-1] = A[j];
                        A[j] = temp;
                        }
}
        }
}

