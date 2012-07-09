package com.sangeethlabs.jni;

public class Fortran {
	static {
		System.loadLibrary("FortranJNI");
	}
	
	public synchronized native static int sum(int a, int b);
	
	public static void main(String[] args) {
		int a = 10, b = 30;
		int result = Fortran.sum(a, b);
		System.out.printf("%s + %s = %s\n", a, b, result);
	}	
}