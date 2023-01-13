#include<stdio.h>
int main(){
int e,n,m,v[3][3];
printf("enter n,m size of image  matrix \n");
scanf("%d %d",&n,&m);
int f[n+2][m+2];
printf("enter elements of kernel  matrix 3×3 \n");
for(int i=0;i<3;i++)for(int j=0;j<3;j++)scanf("%d",&v[i][j]);
printf("enter elements of image  matrix \n");
int g[n+1][m+1];
for(int i=0;i<=n+1;i++)f[i][0]=f[i][m+1]=0;
for(int j=0;j<=m+1;j++)f[0][j]=f[n+1][j]=0;
 
for(int i=1;i<=n;i++)
for(int j=1;j<=m;j++){
scanf("%d",&f[i][j]);
}
for(int i=1;i<=n;i++)
for(int j=1;j<=m;j++)
{
g[i][j]=0;
for(int r=0;r<3;r++)
for(int c=0;c<3;c++)
g[i][j]+=(v[r][c]*f[i+r-1][j+c-1]);
}
printf("output matrix :\n");
for(int i=1;i<=n;i++){
for(int j=1;j<=m;j++)
printf("%d ",g[i][j]);printf("\n");}
return 0;}
