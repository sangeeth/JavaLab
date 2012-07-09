#include "com_sangeethlabs_jni_Fortran.h"

#include <jni.h>

extern"C" {
	int fortransum_(int *, int *);
}

/*
 * Class:     com_sangeethlabs_jni_Fortran
 * Method:    sum
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_sangeethlabs_jni_Fortran_sum(JNIEnv *env, jclass kclass, jint a, jint b)
{
	return fortransum_(&a,&b);
}