package class01TimeSort;

public class GetMax {
	public static int getMax(int[] arr) {	// 0 ~ N - 1 范围上的最大值
		return process(arr, 0, arr.length - 1);
	}
	
	// arr[L..R] 范围上求最大值
	public static int process(int[] arr, int L, int R) {
		if (L == R) {	// arr[L...R] 范围上只有一个数，直接返回，base case
			return arr[L];
		}
		int mid = L + ((R - L) >> 1);	// 中点
		int leftMax = process(arr, L, mid);
		int rightMax = process(arr, mid + 1, R);
		return Math.max(leftMax, rightMax);
	}
}