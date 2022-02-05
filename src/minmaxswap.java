import java.util.*;

public class minmaxswap {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        for (int i = 0; i < n; i++) {
            int x = Integer.parseInt(sc.nextLine());
            int[] first = new int[x];
            int[] second = new int[x];
            for (int j = 0; j < x; j++) {
                first[j] = sc.nextInt();
            }
            sc.nextLine();
            for (int j = 0; j < x; j++) {
                second[j] = sc.nextInt();
                if (second[j] > first[j]) {
                    int temp = second[j];
                    second[j] = first[j];
                    first[j] = temp;
                }
            }
            sc.nextLine();

            System.out.println(Arrays.stream(first).max().getAsInt() * Arrays.stream(second).max().getAsInt());
        }
    }
}
