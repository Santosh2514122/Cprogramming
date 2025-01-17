//w.a.p currency program that tells how many 500,200,100,50,20,20,5,2,1 note will bi need for ginen amount op money
#include<stdio.h>
int main()
{
int rs;
int note500,note200,note100,note50,note20,note10,note5,note2,note1;
note500=note200=note100=note50=note20=note10=note5=note1=0;
printf("enter the amount in rupaye:");
scanf("%d",&rs);
if(rs>=500)
{
    note500=rs/500;
   rs =rs%500;
}
if(rs>=200)

{
    note200=rs/200;
    rs=rs%200;
}
if(rs>=100)
{
    note100=rs/100;
    rs=rs%100;
}
if(rs>=50)
{
        note50=rs/50;
    rs=rs%50;
}
if(rs>=20)
{
    note20=rs/20;
    rs=rs%20;
}
if(rs>=10)
{
    note10=rs/10;
    rs=rs%10;
}
if(rs>=5)
{
    note5=rs/5;
    rs=rs%5;
}
if(rs>=2)
{
    note2=rs/2;
    rs=rs%2;

}
if(rs>=1)
{
    note1=rs/1;
    rs=rs%1;
}
printf("\n 500=%d",note500);
printf("\n 200=%d",note200);
printf("\n 100=%d",note100);
printf("\n 50=%d",note50);
printf("\n 20=%d",note20);
printf("\n 10=%d",note10);
printf("\n 5=%d",note5);
printf("\n 2=%d",note2);
printf("\n 1=%d",note2);
return 0;
}