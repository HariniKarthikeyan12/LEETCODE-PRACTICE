bool isPalindrome(int x) {
int num = x;
int c = 0;
if(num < 10 && num >= 0)
{
    c=1;
    return true;
}
else if(num<0)
{
    return false;
}
else
{
 while(num != 0) {
    c++;
    num/=10;   
 } 
} 

 int a[c];
 num = x;
 for(int i =c-1 ; i>=0;i--)
{
    a[i] = num % 10;
    num /= 10;
}
int i = 0;
int j = c-1;
bool f = true;


while(i<j)
{
    
    if(a[i] != a[j])
    {
     f = false;
     break;
    }
    i++;
    j--;
}



   return f;  
}