import java.io.BufferedReader;
import java.util.List;
import java.util.ArrayList;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Josephus {
	public static void main(String[] args) throws IOException {
		List<Integer> members = new ArrayList<Integer>();

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		StringBuilder sb = new StringBuilder("<");
		StringTokenizer st = new StringTokenizer(br.readLine()," ");
				
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken()) - 1;
		
		for (int inputIndex = 1; inputIndex <= N; ++inputIndex) {
			members.add(inputIndex);
		}
		
		int center = 0;
		
			while (!members.isEmpty()) {
				center += M;
				
				if (center >= members.size()) {
					center %= members.size();
				} 
				
				sb.append(members.remove(center) + ", ");
			}
			
			System.out.println(sb.toString().substring(0, sb.length()-2) + ">");
		}
	
		
}




