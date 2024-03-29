package class01TimeSort;

public class EvenTimeOddTime {
	
	/**
	 * 一个数组中，有一个数字出现奇数次，其余都出现偶数次，求这个数
	 * @param arr
	 */
	public static void printOddTimesNum1(int[] arr) {
		int eor = 0;
		for (int cur : arr) {
			eor ^= cur;
		}
		System.out.println(eor);
	}
	
	/**
	 * 一个数组中，有两个数字出现奇数次，其余都出现偶数次，求这两个数 
	 * @param arr
	 */
	public static void printOddTimesNum2(int[] arr) {
		int eor = 0, onlyOne = 0;	// onlyOne: eor'
		for (int curNum : arr) {
			eor ^= curNum;
		}
		// eor = a ^ b
		// eor != 0
		// eor 必然有一个位置上是 1，选择最右边的 1
		// ~eor: eor 取反
		int rightOne = eor & (~eor + 1);	// 提取出最右边的 1: 一个数与上自己取反 + 1
		for (int cur : arr) {
			if ((cur & rightOne) == 0) {
				// 得到 a or b
				onlyOne ^= cur;
			}
		}
		// eor ^ onlyOne 得到 a，b 中的另一个
		System.out.println(onlyOne + " " + (eor ^ onlyOne));
	}
}
