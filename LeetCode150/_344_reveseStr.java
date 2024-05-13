public class _344_reveseStr{

    public static String method1(String s) {
        if(s.isEmpty()){
            return s;
        }
        
        char[] arr = s.toCharArray();
        int l=0;
        int r=s.length()-1;
        while(l<r){
            char temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }

        return new String(arr);
    }

    public static char[] recursion(char[] arr, int i, int j){
        if(i>j){
            return arr;
        }

        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        return recursion(arr, i+1, j-1);
    }

    public static String method2(String s) {
        if(s.isEmpty()){
            return s;
        }
        
        int l=0;
        int r=s.length()-1;
        char[] arr = s.toCharArray();
        char[] res = recursion(arr, l, r);

        return new String(res);
    }

    public static void main(String[] args) {
        String s = "asdf";
        System.out.println(method1(s));
    }
}