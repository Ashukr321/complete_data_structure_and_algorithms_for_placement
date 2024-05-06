import java.util.Scanner;

public class kadanes_algorithms_brute_force_approch {
    long kadanesAlgo(int arr[]) {
        int maxSub = 0;
        for (int i = 0; i < arr.length; i++) {
            int sum = 0;
            for (int j = i; j < arr.length; j++) {
                sum += arr[j];
                if (maxSub < sum) {
                    maxSub = sum;
                }
            }
        }
        return maxSub;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array: ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter the array elements: ");
        for (int i = 0; i < size; i++) {
            System.out.println("Enter the element at index : " +i);
            arr[i] = sc.nextInt();
        }
        // create the object of the class  kadanes_algorithms_brute_force_approch
        kadanes_algorithms_brute_force_approch kadane = new kadanes_algorithms_brute_force_approch();
        // call the function kadanesAlgo by the help of the object reference
        long maxSubArraySum = kadane.kadanesAlgo(arr);
        System.out.println("Maximum contiguous sum is: " + maxSubArraySum);
    }
}
