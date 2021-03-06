/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "RPC.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

my_string *
pwd_command_to_retrieve_path_1(void *argp, CLIENT *clnt)
{
	static my_string clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, pwd_command_to_retrieve_path,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_my_string, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

my_integer_one_dimensional_array *
sort_1(my_integer_one_dimensional_array *argp, CLIENT *clnt)
{
	static my_integer_one_dimensional_array clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, sort,
		(xdrproc_t) xdr_my_integer_one_dimensional_array, (caddr_t) argp,
		(xdrproc_t) xdr_my_integer_one_dimensional_array, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

my_string *
echo_client_1(my_string *argp, CLIENT *clnt)
{
	static my_string clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, echo_client,
		(xdrproc_t) xdr_my_string, (caddr_t) argp,
		(xdrproc_t) xdr_my_string, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

my_string *
check_file_exist_1(my_string *argp, CLIENT *clnt)
{
	static my_string clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, check_file_exist,
		(xdrproc_t) xdr_my_string, (caddr_t) argp,
		(xdrproc_t) xdr_my_string, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

my_integer_two_dimensional_array *
matrixmultiplication_1(matrix_multiplication_input *argp, CLIENT *clnt)
{
	static my_integer_two_dimensional_array clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, MatrixMultiplication,
		(xdrproc_t) xdr_matrix_multiplication_input, (caddr_t) argp,
		(xdrproc_t) xdr_my_integer_two_dimensional_array, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
