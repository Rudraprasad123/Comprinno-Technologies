#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,flag=0;
        scanf("%d",&n);
        getchar();
        char ch[n][10];
        for(int i=0;i<n;i++)
            scanf("%s",ch[i]);

        for(int i=0;i<n;i++)
        {
            if(strcmp(ch[i],"cookie")==0)
            {
                if(strcmp(ch[i+1],"milk")==0)
                    flag=0;
                else
                {
                    flag=1;
                    printf("NO\n");
                    break;
                }
            }
        }

        if(flag==0)
            printf("YES\n");

    }
    return 0;
}
