import java.util.*;
public class gcdarrays {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        for (int i = 0 ; i < n; i++) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            int k = sc.nextInt();
            sc.nextLine();
            if (l == r && l == 1) {
                System.out.println("NO");
                continue;
            } else if (l == r) {
                System.out.println("YES");
                continue;
            }

            int odd = (r-l+1)-(r/2-(l-1)/2);
            if (odd > k) {
                System.out.println("NO");
            } else {
                System.out.println("YES");
            }
        }
    }
}
