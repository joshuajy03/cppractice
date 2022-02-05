import java.util.*;
import java.io.*;

/**
 * Program Name
 * <p>
 * brief description of the program
 *
 * @author Joshua Yang, LC3
 * @version date
 */
public class sale {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int ans = 0;
        sc.nextLine();
        ArrayList<Integer> tree = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            tree.add(sc.nextInt());
        }
        Collections.sort(tree);
        for(int i = 0; i < m; i++) {
            int temp  = tree.get(i);
            if (temp < 0) {
                ans -= temp;
            } else {
                break;
            }
        }
        System.out.println(ans);
    }
}
