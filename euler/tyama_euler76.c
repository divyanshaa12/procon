#define M 10000
m[M+1];
main(i,d){
	m[0]=1;
	for(d=1;d<=M;d++){
		for(i=d;i<=M;i++){
			if(i-d>=0)m[i]=(m[i]+m[i-d])%1000000007;
		}
	}
	for(scanf("%d",&d);d--;printf("%d\n",(m[i]+1000000006)%1000000007))scanf("%d",&i);
	exit(0);
}
/*
1
100
*/