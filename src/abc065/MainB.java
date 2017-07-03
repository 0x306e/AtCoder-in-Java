package abc065;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class MainB {

  public static void main(String[] args) throws NumberFormatException, IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int num = Integer.parseInt(br.readLine());
    int cnt = 0;

    int a[] = new int[num];
    int b = 1;

    for (int i = 0; i < a.length; i++) {
      a[i] = Integer.parseInt(br.readLine());
    }

    for (int i = 0; i < a.length + 1; i++) {
      b = getLight(a, b);
      cnt++;

      if (b == 2) {
        break;
      }
    }

    if (cnt > a.length) {
      cnt = -1;
    }

    System.out.println(cnt);
  }

  public static int getLight(int a[], int num) {
    return a[num - 1];
  }

}
