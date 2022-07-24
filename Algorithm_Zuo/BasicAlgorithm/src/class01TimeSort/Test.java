package class01TimeSort;

public class Test {
	public static void process1() {
		int N = 1000;
		int a = 0;
		for (int i = 0; i < N; i++) {
			a= 2 + 5;
			a= 4 * 7;
			a= 6 * 8;
		}
	}
	
	public static void process2() {
		int N = 1000;
		int a = 0;
		for (int i = 0; i < N; i++) {
			a= 2 | 5;
			a= 4 & 7;
			a= 6 ^ 8;
		}
	}
	
//	process1 & process2 的时间复杂度一致，对比常数项的速度，所以只能跑代码来看谁更优
	
	// 交换 i 和 j 的值
	public static void swap(int i, int j) {
		i = i ^ j;
		j = i ^ j;
		i = i ^ j;
	}
	
	public static void main(String[] args) {
		// 测试 swap 必须当 i，j 所代表的内存不一样时才可以交换
		int i = 10;
		int j = 10;
		
		swap(i, j);
		
		System.out.println(i);
		System.out.println(j);
	}
}
