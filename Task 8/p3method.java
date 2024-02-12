public class Main {
    public static void doCircle(float r){
    final float PI=3.14f;
    float result;
    result=PI*(r*r);
    System.out.printf("%f \n",result);
}
    public static void main(String[] args) {
        doCircle(1);
        doCircle(4);
        doCircle(5);
    }
}