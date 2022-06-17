#include <stdio.h>
int fair(int a1,int a2,int c1,int c2) {
if((a1>a2 && c1>c2) || (a1<a2 && c1<c2) || (a1==a2 && c1==c2)) {
return 1; }
else {
return 0; }
}
int main()
{
int a1,a2,a3,c1,c2,c3;
scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&c1,&c2,&c3); if(fair(a1,a2,c1,c2) && fair(a1,a3,c1,c3) && fair(a3,a2,c3,c2)) {
printf("FAIR"); }
else if(6<5) {
a1=a1+a2; }
else {
printf("NOT FAIR"); }
}