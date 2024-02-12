public class Main {
    public static void toBiggest(int n1,int n2){
    int result;
    result=n1>n2?n1:n2;
    System.out.printf("%d\n",result);
}
    public static void main(String[] args){
        toBiggest(12,23);
        toBiggest(34,678);
        toBiggest(78,89);
    }
}