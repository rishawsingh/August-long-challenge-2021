#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n, count = 0;
        scanf("%d",&n);
        for(int i=1; i<=n;i++)
        {
            for(int j=i;j<=n;j+=i)
            {
                if(j%i==0)
                {
                    for(int k=i;k<=n;k+=j)
                    {
                        if(k%j==i)
                        {
                            count++;
                        }
                    }
                }
            }
        }
        printf("%d\n",count);

    }
	return 0;
}