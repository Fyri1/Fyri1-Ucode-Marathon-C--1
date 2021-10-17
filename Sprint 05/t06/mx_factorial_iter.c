
int mx_factorial_rec(int n);
{
    int n =5;
    int res=1; 
    if(n>1)
    {
        for (int i = 1; i <= n; i++) 
        {
	     res = res * i;
        }
        return res;
    }
   
    
}
