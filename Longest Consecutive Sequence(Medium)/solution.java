import java.util.HashSet;

public class Solution {

    public static int longestConsecutive(int[] nums) {
        HashSet<Integer> numbers = new HashSet<>();

        for (int num : nums) {
            numbers.add(num);
        }

        int longest = 0;

        for (int num : numbers) {

            if (!numbers.contains(num - 1)) {

                int current = num;
                int length = 1;

                while (numbers.contains(current + 1)) {
                    current++;
                    length++;
                }

                longest = Math.max(longest, length);
            }
        }

        return longest;
    }

    public static void main(String[] args) {

        int[] nums = {100, 4, 200, 1, 3, 2};

        int result = longestConsecutive(nums);

        System.out.println("Longest consecutive sequence: " + result);
    }
}