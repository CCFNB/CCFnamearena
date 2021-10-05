//# pragma optimize O(2)
//# pragma optimize O(3)
# include <stdio.h>
# include <random>
# include <time.h>
# define ull unsigned long long
FILE *fr,*fw;
char s[110],lin[110],pos=-1;
std::mt19937 ran(time(0));
ull ba30=(1<<30)-1,ba60=((ull)1<<60)-1;
void transf(ull x,int lef)
{
	if(lef)
		transf(x>>6,lef-1);
	int now=(x&63);
	if(now>=0 && now<=9)
		s[lef]=now+'0';
	if(now>=10 && now<=35)
		s[lef]=now-10+'A';
	if(now>=36 && now<=61)
		s[lef]=now-36+'a';
	if(now==62)
		s[lef]='{';
	if(now==63)
		s[lef]='}';
	return;
}
ull longran()
{
	ull x=(ull)ran()&ba30;
	ull y=(ull)ran()&ba30;
	return (x<<30)+y;
}
int main()
{
	freopen("ccf.out","w",stdout);
	int i,j,n,m,w;
	ull cun;
	printf("!test!\n");
	for(i=1;i<=8000;i++)
	{
		cun=longran()&ba60;
		transf(cun,9);
		printf("\n%s@€€£",s);
	}
	fclose(stdout);
	return 0;
}
