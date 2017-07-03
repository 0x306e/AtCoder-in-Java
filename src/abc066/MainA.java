package abc066;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class MainA {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    
    String str = br.readLine();
    
    StringTokenizer st = new StringTokenizer(str);
    
    int a = Integer.parseInt(st.nextToken());
    int b = Integer.parseInt(st.nextToken());
    int c = Integer.parseInt(st.nextToken());
    
    int max = Integer.max(a, b);
    max = Integer.max(max, c);
    
    System.out.println(a+b+c-max);
  }

}
