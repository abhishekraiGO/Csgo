#include<stdio.h>
int main()
{
  int n,m;
  scanf("%d",&n);
    char ab[n+1];
    char alpha[26]={0};
    long long  occur[10000000]={0};
    scanf("%s",ab);

    int q;
    scanf("%d",&q);
    int h=0;
    int w;
  
    for(int i=0;ab[i]!='\0';i++)
        {alpha[ab[i]-'a']++;
        occur[i]=alpha[ab[i]-'a'];
 
        }
        for(int i=0;i<q;i++){
            scanf("%d",&w);
        printf("%d\n",occur[w-1]-1);}
        return 0;
}