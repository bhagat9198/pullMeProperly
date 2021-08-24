import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class HitMe {
  public static void main(String[] args) {
    try {
      BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
      System.out.println("Enter the operands : ");
      int a = Integer.parseInt(input.readLine());
      int b = Integer.parseInt(input.readLine());
      int sum = add(a, b);
      int subtract = sub(a, b);
      System.out.println(sum);
      System.out.println(subtract);
    } catch (IOException exc) {
      exc.printStackTrace();
    }
  }

  public static int add(int a, int b) {
    return (a + b);
  }

  public static int sub(int a, int b) {
    return (a - b);
  }
}
