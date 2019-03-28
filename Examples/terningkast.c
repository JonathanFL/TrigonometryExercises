#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 7


int main()
{
	int frequency[ ARRAY_SIZE ] = {0};
	int	throws;

	srand(time(0));

	printf( "Hvor mange gange skal terningen kastes? : " );
	scanf( "%d", &throws );

	for ( int counter=1; counter<=throws; counter++ ){
		frequency[ rand()%6 + 1]++;
	}
		

	printf( "\n\x9Bjne\tfrekvsens\n" ); //printer "øjne       frekvens"

	for( size_t index=1; index<ARRAY_SIZE; index++ ){
		 printf( "%3d%10d\n", index, frequency[index] );
	}
}