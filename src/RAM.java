import java.util.*;
public class RAM implements Comparable<RAM>{
    int x;
    int y;

    RAM(int a, int b) {
        x = a;
        y = b;
    }
    public int compareTo(RAM m) {
        return this.x - m.x;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        for (int i = 0 ; i < n; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            sc.nextLine();
            String[] first = sc.nextLine().split(" ");
            String[] second = sc.nextLine().split(" ");
            RAM[] arr = new RAM[a];
            for (int j = 0; j < a; j++) {
                arr[j] = new RAM(Integer.parseInt(first[j]), Integer.parseInt(second[j]));
            }
            Arrays.sort(arr);
            for (int j = 0; j < a; j++) {
                if (b < arr[j].x) {
                    break;
                } else {
                    b += arr[j].y;
                }
            }
            System.out.println(b);
        }
    }
}
