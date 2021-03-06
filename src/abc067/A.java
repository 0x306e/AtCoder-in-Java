package abc067;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class A {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String s = br.readLine();
    StringTokenizer st = new StringTokenizer(s);

    int a = Integer.parseInt(st.nextToken());
    int b = Integer.parseInt(st.nextToken());

    if ((((a + b) % 3) == 0) || ((a % 3) == 0) || ((b % 3) == 0)) {
      System.out.println("Possible");
    } else {
      System.out.println("Impossible");
    }
  }

}
