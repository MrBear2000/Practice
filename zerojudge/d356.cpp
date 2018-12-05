#include<cstdio>
const int n[]={2,4,11,31,83,227,616,1674,4550,12367,33617,91380,248397,675214,1835421};
int main()
{
    /*FILE*f=freopen("tt.txt","w",stdout);
    double sum=0;
    int k=1;
    for(int i=1;k<=15;i++)
    {
        sum+=1/(double)i;
        if(sum>k)
        {
            k++;
            printf("%d,",i);
        }
    }
    fclose(f);*/
    int t=0;
    while(scanf("%d",&t)==1)
    {
        printf("%d\n",n[t-1]);
    }
    return 0;
}
