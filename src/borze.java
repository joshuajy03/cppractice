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
public class borze {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char[] chars = sc.nextLine().toCharArray();
        char[] ans = new char[chars.length];
        Arrays.fill(ans, ' ');
        for (int i = 0; i < chars.length; i++) {
            if (chars[i] == '.') {
                ans[i] = '0';
            } else if (chars[i+1] == '.') {
                ans[i] = '1';
                i++;
            } else {
                ans[i] = '2';
                i++;
            }
        }
        System.out.println(String.valueOf(ans).replace(" ", ""));
    }
}
