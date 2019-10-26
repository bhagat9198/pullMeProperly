import java.io.*;

class HitMe {
  public static void main(String[] args) {
    int a = 10;
    int b = 20;
    int sum = add(a,b);
    System.out.println(sum);
  }

  public static int add(int a, int b) {
    return a+b;
  }
}