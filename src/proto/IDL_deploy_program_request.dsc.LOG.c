/* It had generated by DirectStruct v1.3.2 */
#include "IDL_deploy_program_request.dsc.h"

#ifndef FUNCNAME_DSCLOG_deploy_program_request
#define FUNCNAME_DSCLOG_deploy_program_request	DSCLOG_deploy_program_request
#endif

#ifndef PREFIX_DSCLOG_deploy_program_request
#define PREFIX_DSCLOG_deploy_program_request	printf( 
#endif

#ifndef NEWLINE_DSCLOG_deploy_program_request
#define NEWLINE_DSCLOG_deploy_program_request	"\n"
#endif

int FUNCNAME_DSCLOG_deploy_program_request( deploy_program_request *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_deploy_program_request "deploy_program_request.program[%s]" NEWLINE_DSCLOG_deploy_program_request , pst->program );
	return 0;
}