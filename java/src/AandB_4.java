import java.util.Scanner;

public class AandB_4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		
        while(sc.hasNext()) {
            String[] nums = sc.nextLine().split(" ");
            System.out.println(Integer.parseInt(nums[0]) + Integer.parseInt(nums[1]));
        }
    }
}
