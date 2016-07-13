#include<stdio.h>
int main(){
int k,n,s,r,j,t,c;
scanf("%d %d",&n,&k);
int i=0,a[10];
while(n)
{
r=n%10;
n=n/10;
a[i]=r;
i++;

}
c=i;

for(i=0;i<c-k;i++)
{s=i;
for(j=i+1;j<c;j++)
{
if(a[s]>a[j])
{
s=j;
}
}
t=a[s];
a[s]=a[i];
a[i]=t;
printf("%d",a[i]);
}


return 0;
}
