import java.util.*;
import java.lang.*;
import java.io.*;

public class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		while(T-->0){
		    int N=sc.nextInt();
		    int K=sc.nextInt();
		    int a1=0;
		    int b1=0;
		    ArrayList<Integer> A=new ArrayList<>();
		    ArrayList<Integer> a=new ArrayList<>();
		    ArrayList<Integer> B=new ArrayList<>();
		    ArrayList<Integer> b=new ArrayList<>();
		    ArrayList<Integer> C=new ArrayList<>();
		    for(int i=0;i<2*N;i++){
		       
		        int x=sc.nextInt();
		        
		        if(i<N){
		            
		            if(A.contains(x)){
		              //  System.out.println(x+"*");
		                a.add(x);
		                A.remove(Integer.valueOf(x));
		                
		            }
		            else{
		                A.add(x);
		            }
		            
		        }
		        else{
		            
		            if(B.contains(x)){
		              //  System.out.println(x);
		                b.add(x);
		                B.remove(Integer.valueOf(x));
		                
		            }
		            else{
		                B.add(x);
		            }
		        }
		    }
		    Collections.sort(A);
		    Collections.sort(B);
		  //  System.out.println(A+" "+B);
		    if((2*K)<=(2*a.size())){
		        for(int i=0;i<K;i++){
		            System.out.print(a.get(i)+" "+a.get(i)+" ");
		        }
		        System.out.println();
		        for(int i=0;i<K;i++){
		            System.out.print(b.get(i)+" "+b.get(i)+" ");
		        }
		        System.out.println();
		    }
		    else{
		        K=2*K-(2*a.size());
		        int k=K;
		      //  System.out.println(C);
		        
		        for(int i=0;i<a.size();i++){
		            System.out.print(a.get(i)+" "+a.get(i)+" ");
		        }
		        for(int i=0;i<A.size();i++){
		            System.out.print(A.get(i)+" ");
		            K--;
		            if(K==0){
		                break;
		            }
		        }
		        System.out.println();
		        for(int i=0;i<b.size();i++){
		            System.out.print(b.get(i)+" "+b.get(i)+" ");
		        }
		       
		        for(int i=0;i<B.size();i++){
		            System.out.print(A.get(i)+" ");
		            k--;
		            if(k==0){
		                break;
		            }
		        }
		        System.out.println();
		        
		    }
		}
	}
}