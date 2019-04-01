# include <stdio.h>
int main()
{
  int i=0,j[3]={1,2,3};
  int n,x=0;
  scanf("%d",&n);
  while(x<=n)
  {
    x+=j[i];

    if(x==n)
    {
      printf("YES");
      break;
    }
    if(i==2)
      i=0;
      else
      i++;
    }
  if(x!=n)
      printf("NO");

}
