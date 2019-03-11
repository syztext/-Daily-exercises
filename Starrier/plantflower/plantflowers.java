package org.starrier.codecombat.leetcode;

/**
 * @author Starrier
 * @date 2019/3/11.
 * <p>
 * Description :
 */
public class plantflowers {
    public static boolean isPlanted(int[] flowered, int n) {
        for (int i = 0; i < flowered.length; i++) {
            if (satisfy(flowered, i)) {
                flowered[i] = 1;
                n--;
            }
            }
        return n <= 0;
    }

    private static boolean satisfy(int[] nums, int n) {
        if (nums[n] == 1) {
            return false;
        }
        int len = nums.length - 1;
        if (nums[n] == 0 && (n - 1 < 0 || nums[n - 1] == 0) && (n + 1 > len || nums[n + 1] == 0)) {
            return true;
        } else {
            return false;
        }
    }

    public static void main(String[] args) {
        int[] n = new int[5];
        n[0] = 1;
        n[1] = 2;
        n[3] = 3;
        int m = 1;


        System.out.println(isPlanted(n, m));
    }

}
