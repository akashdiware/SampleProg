public class Challenge{
    public static int cyclicString(String str){
        for(int i=1;i<=str.length();i++){
            String unique = str.substring(0,i);
            boolean isFound=true;
            for(int j=0;j<str.length();j++){
                if(str.charAt(j) != unique.charAt(j%unique.length())){
                    isFound=false;
                    break;
                }
            }
            if(isFound)
                return i;
        }
        return 0;
    }
     public static void main(String []args){
         String S = "aadddaaa";
         System.out.println(Challenge.cyclicString(S));
     }
}
