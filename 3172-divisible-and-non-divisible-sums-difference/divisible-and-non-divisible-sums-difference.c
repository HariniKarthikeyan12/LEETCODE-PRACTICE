int differenceOfSums(int n, int m) {
int res = 0;
int a = 0;
int b = 0;

for(int i =1;i<= n;i++)
{
    if(i%m == 0)
    {
        a += i;
    }
    else
    {
        b += i;
    }
}


res = b - a;
return res;


}