 import java.util.Scanner;

public class Prim {

	static Scanner scan;
	
	public static void main(String[] args){
		
		scan = new Scanner(System.in);
		int n;
		System.out.print("enter no of vertices in graph:");
		n=scan.nextInt();
		int[][] matrix = new int[n][n];
		int[] visited = new int[n];
		int min = 999;
		int u = 0, v = 0;
		int total = 0;
		
		for(int i = 0; i < n; i++){
			
			visited[i] = 0;
			
			for(int j = 0; j < n; j++){
				
				matrix[i][j] = scan.nextInt();
				if(matrix[i][j]==0){
					
					matrix[i][j] = 999;
					
				}
				
			}
			
		}
		
		visited[0] = 1;
		
		for(int counter = 0; counter< n-1 ; counter++){
			
			min = 999;
			
			for(int i = 0; i < n; i++){
			
			if(visited[i]==1){
			
				for(int j = 0; j < n; j++){
				
					if(visited[j]==0){
						
						if(min > matrix[i][j]){
							
							min = matrix[i][j];
							u = i;
							v = j;
							
						}
						
					}
					
				}
				
			}
			
			}
			visited[v] = 1;
			total += min;
			matrix[u][v] = matrix[v][u] = 999; 
			System.out.println("Edge connected: "+u+" -> "+v+" : "+min);
			
			
		
		}
		System.out.println("The total weight of the spanning tree is "+ total);
		
	}
	
}