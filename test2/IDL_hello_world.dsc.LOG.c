/* It had generated by DirectStruct v1.11.0 */
#include "IDL_hello_world.dsc.h"

#ifndef FUNCNAME_DSCLOG_hello_world
#define FUNCNAME_DSCLOG_hello_world	DSCLOG_hello_world
#endif

#ifndef PREFIX_DSCLOG_hello_world
#define PREFIX_DSCLOG_hello_world	printf( 
#endif

#ifndef NEWLINE_DSCLOG_hello_world
#define NEWLINE_DSCLOG_hello_world	"\n"
#endif

int FUNCNAME_DSCLOG_hello_world( hello_world *pst )
{
	int	index[10] = { 0 } ; index[0]++; index[0] = 0 ;
	PREFIX_DSCLOG_hello_world "hello_world.message[%s]" NEWLINE_DSCLOG_hello_world , pst->message );
	return 0;
}